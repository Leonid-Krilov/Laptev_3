#include "Rational.h"

Rational::Rational()
{
}

Rational::Rational(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

Rational::~Rational()
{
}


void Rational::Input()
{
	std::cout << "\nEnter numerator";
	std::cout << "\n> ";
	std::cin >> numerator;

	while (true)
	{
		std::cout << "\nEnter denominator";
		std::cout << "\n> ";
		std::cin >> denominator;
		if (denominator == 0)
			std::cout << "\nERror!";
		else
			break;
	}
}

void Rational::Output()
{
	auto temp = this->reduction();

	this->numerator = temp.numerator;
	this->denominator = temp.denominator;

	((denominator == 1) || (denominator == -1)) ? std::cout << this->innumber() << std::endl :
		std::cout << numerator << '/' << denominator << std::endl;
}

double Rational::innumber()
{
	auto rez = static_cast<double>(this->numerator) / this->denominator;

	return rez;
}

Rational Rational::reduction()
{
	return Rational(( numerator / std::gcd(numerator, denominator)), (denominator / std::gcd(numerator, denominator)));
}

void Rational::addition(Pair* op1, Pair* op2)
{
	int  Nok = dynamic_cast<Rational*>(op1)->denominator * dynamic_cast<Rational*>(op2)->denominator / std::gcd(dynamic_cast<Rational*>(op1)->denominator, dynamic_cast<Rational*>(op2)->denominator);

	this->numerator = ((dynamic_cast<Rational*>(op1)->numerator * (Nok / dynamic_cast<Rational*>(op1)->denominator)) + ((dynamic_cast<Rational*>(op2)->numerator * (Nok / dynamic_cast<Rational*>(op2)->denominator))));
	this->denominator = Nok;
}

void Rational::subsraction(Pair* op1, Pair* op2)
{
	int  Nok = dynamic_cast<Rational*>(op1)->denominator * dynamic_cast<Rational*>(op2)->denominator / std::gcd(dynamic_cast<Rational*>(op1)->denominator, dynamic_cast<Rational*>(op2)->denominator);

	this->numerator = ((dynamic_cast<Rational*>(op1)->numerator * (Nok / dynamic_cast<Rational*>(op1)->denominator)) - ((dynamic_cast<Rational*>(op2)->numerator * (Nok / dynamic_cast<Rational*>(op2)->denominator))));
	this->denominator = Nok;
}

void Rational::multiplication(Pair* op1, Pair* op2)
{
	this->numerator = (dynamic_cast<Rational*>(op1)->numerator * dynamic_cast<Rational*>(op2)->numerator);
	this->denominator = (dynamic_cast<Rational*>(op1)->denominator * dynamic_cast<Rational*>(op2)->denominator);
}

void Rational::division(Pair* op1, Pair* op2)
{
	this->numerator = (dynamic_cast<Rational*>(op1)->numerator * dynamic_cast<Rational*>(op2)->denominator);
	this->denominator = (dynamic_cast<Rational*>(op1)->denominator * dynamic_cast<Rational*>(op2)->numerator);

}