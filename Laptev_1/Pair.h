#pragma once
#include<numeric>
#include <iostream>

class Pair
{
public:
	Pair() {};
	~Pair() {};

	double RealNumber;
	double ImagNumber;

	double numerator;
	double denominator;

	virtual void Input() = 0;
	virtual void Output() = 0;

	virtual void addition(Pair*, Pair*) = 0;
	virtual void subsraction(Pair*, Pair*) = 0;
	virtual void multiplication(Pair*, Pair*) = 0;
	virtual void division(Pair*, Pair*) = 0;
};