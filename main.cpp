#include "Basic.h"
#include "Physics.h"
#include "Conversion.h"

int main()
{
	Physics p1;
	Basic b1;
	Conversion c1;
	string quitval = "y";
	string math;
	cout << "WELCOME TO BRADEN'S CALCULATOR HAVE FUN!!!!" << endl;
	while (quitval == "y")
	{
		cout << "What type of math are you trying to calculate (Physics, Calculus, Basic, Conversion, Exit): ";
		cin >> math;
		if (math == "Basic")
		{
			b1.print();
		}
		if (math == "Physics")
		{
			p1.print();
		}
		if (math == "Conversion")
		{
			c1.print();
		}
		if (math == "Exit")
		{
			break;
		}
			cout << "Would you like to continue? (y/n) ";
			cin >> quitval;
	}
	cout << "SEE YOU SOON!!" << endl;
	cout << endl;
}