#pragma once
#include<iostream>
#include"Pair.h"
#include"Complex.h"
#include"Rational.h"

using namespace std;

class Menu
{
public:
	void calculator(Pair* op1, Pair* op2, char item);
	void print_menu();
};

