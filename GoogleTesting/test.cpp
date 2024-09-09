#include "pch.h"
#include "MathLib.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Addition, adding)
{
	EXPECT_EQ(2, Math::Add(1, 1));
}