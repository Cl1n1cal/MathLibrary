#include "MathLib.h"
#include <iostream>
namespace Math
{
	void PrintMessage()
	{
		std::cout << "Hello from math\n";
	}

	double Add(const double A, const double B)
	{
		return A + B;
	}

	double Sub(const double A, const double B)
	{
		return A - B;
	}

	double Mul(const double A, const double B)
	{
		return A * B;
	}

	double Div(const double A, const double B)
	{
		if (Abs(A) < EPSILON || Abs(B) < EPSILON)
		{
			return 0;
		}
		return A / B;
	}

	double Fac(double A)
	{
		if (A < 0)
		{
			return 1;
		}
		if (Abs(A) < EPSILON)
		{
			return 1;
		}
		return Mul(A, Fac(A - 1));
	}

	double Abs(const double A)
	{
		if (A < 0)
		{
			return Mul(A, -1.0);
		}
		return A;
	}

	//Find Fibonacci number N
	int Fib(int N) {
		if (N == 0) {
			return 0;
		}
		if (N == 1) {
			return 1;
		}
		if (N == 2) {
			return 1;
		}
		return Fib(N-2) + Fib(N-1);
	}

	//TODO: Optimize by using binary search algorithm idea
	//Returns -1 on error
	int FindNearestFibValueBelow(int N) {
		int i = 0;
		while (true) {
			i += 1;
			if (Fib(i) > N) {
				return Fib(i - 1);
			}
		}
		return -1;
	}

	//Returns -1 on error
	int FindFibIndexFromVal(int Value) {
		if (1836311903 < Value) { //46th Fib number. Cannot go larger with int
			return -1;
		}
		int i = 0;
		while (true) {
			i += 1;

			//Cannot go larger
			if (i > 46) {
				return -1;
			}

			//Value found
			if (Fib(i) == Value) {
				return i;
			}
		}
		return -1; //On some failure
	}

	//Is B a multiple of A
	bool MultipleOf(int A, int B) {
		if (B % A == 0) {
			return true;
		}
		else {
			return false;
		}
	}

//Returns the sum of the multiples of A within the range [0;B] (Natural Numbers)
	int SumOfMultiples(int A, int B) {

		int sum = 0;
		int i = A; //Iterator
		while (i < B) {
			sum += i;
			i += A;
		}
		return sum;
	}

	int Euler2(int N) {
		int sum = 0;
		int i = 0;
		while (i <= N) {
			int fibVal = Fib(i);

			if (fibVal % 2 == 0) {
				sum += fibVal;
			}

			i += 1;
		}
		return sum;
	}
}
