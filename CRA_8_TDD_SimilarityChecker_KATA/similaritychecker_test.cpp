#include "gmock/gmock.h"
#include "similaritychecker.cpp"

using namespace testing;
class LengthFixture : public Test
{
public:
	void CheckLengthPoint(int expected, string first, string second)
	{
		LengthChecker lengthChecker{ first, second };
		int retPoint = lengthChecker.getLenthPoint();

		EXPECT_EQ(expected, retPoint);
	}
};

TEST_F(LengthFixture, CaseForSameLength)
{
	CheckLengthPoint(60, "abc", "abc");
}

TEST_F(LengthFixture, CaseForLargeDiffLength1)
{
	CheckLengthPoint(0, "ab", "fcde");
}

TEST_F(LengthFixture, CaseForLargeDiffLength2)
{
	CheckLengthPoint(0, "adfg", "z");
}

TEST_F(LengthFixture, CaseForSmallDiffLength1)
{
	CheckLengthPoint(30, "adf", "zb");

}

TEST_F(LengthFixture, CaseForSmallDiffLength2)
{
	CheckLengthPoint(15, "zxcv", "adfasdf");
}

TEST(AlphaCheck, SameAlphbet)
{
	AlphabetChecker alphaChecker("ASD", "DSA");
	int retPoint = alphaChecker.getPoint();
	EXPECT_EQ(40, retPoint);
}