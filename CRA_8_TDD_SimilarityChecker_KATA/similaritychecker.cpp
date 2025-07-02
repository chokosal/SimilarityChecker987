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
		
		if (targetFirst.length() > targetSecond.length())
		{
			return 0;
		}
		
		return retPoint;
	}

private:
	static const int MAX_LENGTH_POINT = 60;
	string targetFirst;
	string targetSecond;
};