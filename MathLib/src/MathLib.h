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
}