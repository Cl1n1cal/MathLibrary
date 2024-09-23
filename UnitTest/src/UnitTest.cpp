#include "pch.h"
#include "CppUnitTest.h"
#include "MathLib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathLibTesting
{
	TEST_CLASS(Factorial)
	{
	public:

		TEST_METHOD(Factorial1)
		{
			double expected = 1;
			double result = Math::Fac(1);
			Assert::AreEqual(expected, result);
		}
	};

	TEST_CLASS(Fibonacci) 
	{
	public:
		TEST_METHOD(testFib0) {
			int expected = 0;
			int result = Math::Fib(0);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(testFib1) {
			int expected = 1;
			int result = Math::Fib(1);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(testFib2) {
			int expected = 1;
			int result = Math::Fib(2);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(testFib3) {
			int expected = 2;
			int result = Math::Fib(3);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(testFib5) {
			int expected = 5;
			int result = Math::Fib(5);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(testFib11) {
			int expected = 89;
			int result = Math::Fib(11);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(FindNearestFibValueBelow10) {
			int expected = 8;
			int result = Math::FindNearestFibValueBelow(10);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(FindNearestFibValueBelow4Million) {
			int expected = 3524578;
			int result = Math::FindNearestFibValueBelow(4000000);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(FindFibIndexFromValue8) {
			int expected = 6;
			int result = Math::FindFibIndexFromVal(8);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(FindFibIndexFromValue2Billion) {
			int expected = -1;
			int result = Math::FindFibIndexFromVal(2000000000); //Too large value on purpose
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(FindFibIndexFromValueNotAFibVal) {
			int expected = -1;
			int result = Math::FindFibIndexFromVal(7);
			Assert::AreEqual(expected, result);
		}
	};

	TEST_CLASS(MultiplesOf) {
		TEST_METHOD(MultipleOfTrue) {
			bool expected = true;
			bool result = Math::MultipleOf(5, 10);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(MultipleOfFalse) {
			bool expected = false;
			bool result = Math::MultipleOf(5, 11);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(SumOfMultiples3And18) {
			int expected = 45;
			int result = Math::SumOfMultiples(3, 18);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(SumOfMultiples3And8) {
			int expected = 9;
			int result = Math::SumOfMultiples(3, 8);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(SumOfMultiple15And1000) {
			int expected = 33165;
			int result = Math::SumOfMultiples(15, 1000);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(SumOfMultiple5And1000) {
			int expected = 99500;
			int result = Math::SumOfMultiples(5, 1000);
			Assert::AreEqual(expected, result);
		}
	};

	TEST_CLASS(Euler1) {
		TEST_METHOD(Euler1Finished) {
			int expected = 233168;
			int result = Math::SumOfMultiples(3, 1000) + Math::SumOfMultiples(5, 1000) - Math::SumOfMultiples(15, 1000);
			Assert::AreEqual(expected, result);
		}
	};

	TEST_CLASS(Euler2) {
		TEST_METHOD(Euler2Finished) {
			int expected = 4613732;

			int fibVal = Math::FindNearestFibValueBelow(4000000);
			int fibIndex = Math::FindFibIndexFromVal(fibVal);
			int result = Math::Euler2(fibIndex);
			Assert::AreEqual(expected, result);
		}
	};
}
