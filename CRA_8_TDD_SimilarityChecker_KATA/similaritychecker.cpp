#include <string>

using std::string;

class SimilarChecker
{
public:
	SimilarChecker(string string1st, string string2nd) 
		: targetFirst{ string1st }, targetSecond{string2nd} {
	
	}

	int getLenthPoint()
	{
		if (targetFirst.length() == targetSecond.length())
		{
			return 60;
		}
	}

private:
	string& targetFirst;
	string& targetSecond;
};