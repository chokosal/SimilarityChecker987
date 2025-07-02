#include "gmock/gmock.h"
#include "similaritychecker.cpp"

TEST(Similaritycheck, CaseForSameLength)
{
	SimilarChecker simChecker{ "abc", "abc" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(60, retPoint);
}

TEST(Similaritycheck, CaseForLargeDiffLength1)
{
	SimilarChecker simChecker{ "ab", "fcde" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(0, retPoint);
}

TEST(Similaritycheck, CaseForLargeDiffLength2)
{
	SimilarChecker simChecker{ "adfg", "z" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(0, retPoint);
}

TEST(Similaritycheck, CaseForSmallDiffLength1)
{
	SimilarChecker simChecker{ "adf", "zb" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(30, retPoint);
}

TEST(Similaritycheck, CaseForSmallDiffLength2)
{
	SimilarChecker simChecker{ "zxcv", "adfasdf" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(15, retPoint);
}
