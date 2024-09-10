#include "pch.h"
#include "MathLib.h"

//Addition
TEST(Addition, addingTwoPositiveNumbers)
{
	EXPECT_EQ(2, Math::Add(1, 1));
}

TEST(Addition, addingLargerPositiveAndSmallerNegativeNumber)
{
	EXPECT_EQ(4, Math::Add(5, -1));
}

TEST(Addition, addingSmallerPositiveAndLargerNegativeNumber)
{
	EXPECT_EQ(-2, Math::Add(3, -5));
}

TEST(Addition, addingTwoNegativeNumbers)
{
	EXPECT_EQ(-10, Math::Add(-5, -5));
}

TEST(Addition, addingEquallyPositiveAndNegativeNumbers)
{
	EXPECT_EQ(0, Math::Add(5, -5));
}

//Subtraction
TEST(Subtraction, subtractingLargerSrcSmallerSink)
{
	EXPECT_EQ(3, Math::Sub(8, 5));
}

TEST(Subtraction, subtractingSmallerSrcLargerSink)
{
	EXPECT_EQ(-3, Math::Sub(5, 8));
}

TEST(Subtraction, subtractingNegativeSrcPositiveSink)
{
	EXPECT_EQ(-8, Math::Sub(-3, 5));
}

TEST(Subtraction, subtractingPositiveSrcNegativeSink)
{
	EXPECT_EQ(13, Math::Sub(8, -5));
}

TEST(Subtraction, subtractingTwoNegativeNumbers)
{
	EXPECT_EQ(0, Math::Sub(-3, -3));
}

//Multiplication
TEST(Multiplication, multiplyTwoPositiveNmbers)
{
	EXPECT_EQ(6, Math::Mul(2, 3));
}

TEST(Multiplication, multiplyPositiveAndNegativeNumber)
{
	EXPECT_EQ(-6, Math::Mul(2, -3));
}

TEST(Multiplication, multiplyTwoNegativeNumbers)
{
	EXPECT_EQ(9, Math::Mul(-3, -3));
}

//Division
TEST(Division, divideByZero)
{
	EXPECT_EQ(0, Math::Div(2, 0));
}

TEST(Division, numeratorZero)
{
	EXPECT_EQ(0, Math::Div(0, 2));
}

TEST(Division, divisionByNegativeNumber)
{
	EXPECT_EQ(-2, Math::Div(4, -2));
}

TEST(Division, negativeNumeratorPositiveDivider)
{
	EXPECT_EQ(-2, Math::Div(-4, 2));
}

//Factorial
TEST(Factorial, usingZero)
{
	EXPECT_EQ(1, Math::Fac(0));
}

TEST(Factorial, usingOne)
{
	EXPECT_EQ(1, Math::Fac(1));
}

TEST(Factorial, usingFive)
{
	EXPECT_EQ(120, Math::Fac(5));
}

TEST(Factorial, usingTen)
{
	EXPECT_EQ(3628800, Math::Fac(10));
}