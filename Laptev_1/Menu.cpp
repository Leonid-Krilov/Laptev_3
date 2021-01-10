#include "Menu.h"

void Menu::calculator(Pair* op1, Pair* op2, char item)
{
	op1->Input();
	op2->Input();

	switch (item)
	{
	case'1':
		op1->addition(op1, op2);
		op1->Output();
		break;
	case'2':
		op1->subsraction(op1, op2);
		op1->Output();
		break;
	case'3':
		op1->multiplication(op1, op2);
		op1->Output();
		break;
	case'4':
		op1->division(op1, op2);
		op1->Output();
		break;
	default:
		break;
	}
	
}

void Menu::print_menu()
{
	Pair* operand1, * operand2, * result;

	char choose;
	char choose_complex;

	double Real;
	double Imag;

	while (true)
	{
		Complex Coperand1;
		Complex Coperand2;
		Rational Roperand1;
		Rational Roperand2;



		while (true)
		{
			cout << "\nSelect command.\nPress '1' - Complex numbers.\nPress '2' - Rational numbers.\nPress '0' - to exit";
			cout << "\n> ";
			cin >> choose;

			while (true)
			{
				if (choose == '0')
					exit(0);
				else
					break;
			}

			while (true)
			{
				cout << "\nPress '1' - add, Press '2' - sub. Press '3' - mul, Press '4' - div";
				cout << "\n> ";
				cin >> choose_complex;
				
				if ((choose_complex < '1') || (choose_complex > '4'))
					cout << "\nEror";
				else
					break;
			
			}

			switch (choose)
			{
			case '1':
				this->calculator(&Coperand1, &Coperand2, choose_complex);
				break;
			case '2':
				this->calculator(&Roperand1, &Roperand2, choose_complex);
				break;
			default:
				cout << "Error!";
				break;
			}

		}
	}
}