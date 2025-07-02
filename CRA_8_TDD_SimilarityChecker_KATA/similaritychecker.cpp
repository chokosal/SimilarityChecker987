#include <string>

using std::string;

class SimilarChecker
{
public:
	SimilarChecker(string string1st, string string2nd)
		: targetFirst{ string1st }, targetSecond{ string2nd } {

	}

	int getLenthPoint()
	{
		int retPoint = 0;
		if (targetFirst.length() == targetSecond.length())	return MAX_LENGTH_POINT;
		
		int longLength = (targetFirst.length() > targetSecond.length()) ? targetFirst.length() : targetSecond.length();
		int shortLength = (targetFirst.length() > targetSecond.length()) ? targetSecond.length() : targetFirst.length();

		if (longLength >= shortLength * FAIL_LENGTH_DIFF_MULTIPLE)
		{
			return 0;
		}
		
		return retPoint;
	}

private:
	static const int MAX_LENGTH_POINT = 60;
	static const int FAIL_LENGTH_DIFF_MULTIPLE = 2;
	string targetFirst;
	string targetSecond;
};