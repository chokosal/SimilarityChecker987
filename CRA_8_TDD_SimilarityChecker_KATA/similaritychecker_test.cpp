#include "gmock/gmock.h"
#include "similaritychecker.cpp"

TEST(Similaritycheck, CaseForSameLength)
{
	SimilarChecker simChecker{ "abc", "abc" };
	int retPoint = simChecker.getLenthPoint();

	EXPECT_EQ(60, retPoint);
}

