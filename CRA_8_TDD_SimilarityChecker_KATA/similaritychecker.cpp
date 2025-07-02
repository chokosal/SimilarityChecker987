#include <string>

using std::string;

class LengthChecker
{
public:
	LengthChecker(string string1st, string string2nd)
		: targetFirst{ string1st }, targetSecond{ string2nd } {

	}

	int getLenthPoint()
	{
		int retPoint = 0;
		if (IsMaxPointCondition())	return MAX_LENGTH_POINT;

		int longLength = (targetFirst.length() > targetSecond.length()) ? targetFirst.length() : targetSecond.length();
		int shortLength = (targetFirst.length() > targetSecond.length()) ? targetSecond.length() : targetFirst.length();

		if (IsZeroPointCondition(longLength, shortLength))	return 0;
		
		retPoint = getPartialPoint(longLength, shortLength);
		

		return retPoint;
	}

	int getPartialPoint(int longLength, int shortLength)
	{
		int gap = longLength - shortLength;
		return MAX_LENGTH_POINT - MAX_LENGTH_POINT * (gap) / shortLength;
	}

	bool IsZeroPointCondition(int longLength, int shortLength)
	{
		return longLength >= shortLength * FAIL_LENGTH_DIFF_MULTIPLE;
	}

	bool IsMaxPointCondition()
	{
		return targetFirst.length() == targetSecond.length();
	}

private:
	static const int MAX_LENGTH_POINT = 60;
	static const int FAIL_LENGTH_DIFF_MULTIPLE = 2;
	string targetFirst;
	string targetSecond;
};

class AlphabetChecker
{
public:
	AlphabetChecker(string string1st, string string2nd)
		: targetFirst{ string1st }, targetSecond{ string2nd } {

	}

	int getPoint()
	{
		return MAX_ALPHABET_POINT;
	}

private:
	static const int MAX_ALPHABET_POINT = 40;
	string targetFirst;
	string targetSecond;
};