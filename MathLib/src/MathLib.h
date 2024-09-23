#pragma once

#define EPSILON std::numeric_limits<double>::epsilon()

namespace Math
{
	void PrintMessage();
	double Add(double A, double B);
	double Sub(double A, double B);
	double Mul(double A, double B);
	double Div(double A, double B);
	double Fac(double A);
	double Abs(double A);
	int Fib(int N);
	int FindNearestFibValueBelow(int N);
	int FindFibIndexFromVal(int Value);
	int Euler2(int N);
	bool MultipleOf(int A, int B);
	int SumOfMultiples(int A, int B);
}