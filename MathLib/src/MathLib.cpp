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
}
