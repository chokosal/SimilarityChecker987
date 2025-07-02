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
		if (targetFirst.length() == targetSecond.length())
		{
			return MAX_LENGTH_POINT;
		}
	}

private:
	static const int MAX_LENGTH_POINT = 60;
	string targetFirst;
	string targetSecond;
};