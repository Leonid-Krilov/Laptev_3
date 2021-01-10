#include "Complex.h"

Complex::Complex()
{
	//RealNumber = 0;
	//ImagNumber = 0;
}

Complex::Complex(double RealNumber, double ImagNumber)
{
	this->RealNumber = RealNumber;
	this->ImagNumber = ImagNumber;
}

Complex::~Complex()
{
}

double Complex::Real()
{
	return RealNumber;
}

double Complex::Imag()
{
	return ImagNumber;
}


void Complex::Input()
{
	std::cout << "\nEnter real";
	std::cout << "\n> ";
	std::cin >> RealNumber;

	while (true)
	{
		std::cout << "\nEnter imag";
		std::cout << "\n> ";
		std::cin >> ImagNumber;
		if (ImagNumber == 0)
			std::cout << "\nError!";
		else
			break;
	}
}

void Complex::Output()
{
	std::cout << "\nAnswer: " << "\nReal: " << RealNumber << " Imag: " << ImagNumber << "\n";
}

void Complex::addition(Pair* op1, Pair* op2)
{
	
	this->RealNumber = dynamic_cast<Complex*>(op1)->RealNumber + dynamic_cast<Complex*>(op2)->RealNumber;
	this->ImagNumber = dynamic_cast<Complex*>(op1)->ImagNumber + dynamic_cast<Complex*>(op2)->ImagNumber;
}

void Complex::subsraction(Pair* op1, Pair* op2)
{
	this->RealNumber = dynamic_cast<Complex*>(op1)->RealNumber - dynamic_cast<Complex*>(op2)->RealNumber;
	this->ImagNumber = dynamic_cast<Complex*>(op1)->ImagNumber - dynamic_cast<Complex*>(op2)->ImagNumber;
}

void Complex::multiplication(Pair* op1, Pair* op2)
{
	this->RealNumber = (dynamic_cast<Complex*>(op1)->RealNumber * dynamic_cast<Complex*>(op2)->RealNumber - dynamic_cast<Complex*>(op1)->ImagNumber * dynamic_cast<Complex*>(op2)->ImagNumber);
	this->ImagNumber = (dynamic_cast<Complex*>(op1)->RealNumber * dynamic_cast<Complex*>(op2)->ImagNumber + dynamic_cast<Complex*>(op1)->ImagNumber * dynamic_cast<Complex*>(op2)->RealNumber);
}

void Complex::division(Pair* op1, Pair* op2)
{
	double k = ((dynamic_cast<Complex*>(op2)->RealNumber * dynamic_cast<Complex*>(op2)->RealNumber) + (dynamic_cast<Complex*>(op2)->ImagNumber * dynamic_cast<Complex*>(op2)->ImagNumber));
	RealNumber = (((dynamic_cast<Complex*>(op1)->RealNumber * dynamic_cast<Complex*>(op2)->RealNumber) + (dynamic_cast<Complex*>(op1)->ImagNumber * dynamic_cast<Complex*>(op2)->ImagNumber)) / k);
	ImagNumber = (((dynamic_cast<Complex*>(op2)->RealNumber * dynamic_cast<Complex*>(op1)->ImagNumber) - (dynamic_cast<Complex*>(op1)->RealNumber * dynamic_cast<Complex*>(op2)->ImagNumber)) / k);
}



