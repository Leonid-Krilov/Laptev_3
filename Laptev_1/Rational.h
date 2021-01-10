#pragma once
#include<numeric>
#include <iostream>
#include"Pair.h"


class Rational: public Pair
{
public:
	Rational();
	Rational(int numenator, int denominator);
	~Rational();
	
	void Input() override;
	void Output() override;

	double innumber();
	Rational reduction();

	virtual void addition(Pair* op1, Pair* op2) override;
	virtual void subsraction(Pair* op1, Pair* op2) override;
	virtual void multiplication(Pair* op1, Pair* op2) override;
	virtual void division(Pair* op1, Pair* op2) override;



private:
	int numerator;
	int denominator;
};

