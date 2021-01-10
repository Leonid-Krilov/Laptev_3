#pragma once
#pragma once
#include<numeric>
#include <iostream>
#include"Pair.h"

class Complex: public Pair
{
public:
	Complex();
	Complex(double RealNumber, double ImagNumber);
	~Complex();

	double Real();
	double Imag();

	void Input() override;
	void Output() override;
	
	virtual void addition(Pair* op1, Pair* op2) override;
	virtual void subsraction(Pair* op1, Pair* op2) override;
	virtual void multiplication(Pair* op1, Pair* op2) override;
	virtual void division(Pair* op1, Pair* op2) override;

	

private:
	double RealNumber;
	double ImagNumber;

};

