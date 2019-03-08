#include "Basic.h"
#include "Physics.h"

int main()
{
	Physics p1;
	Basic b1;
	string quitval = "y";
	string math;
	cout << "WELCOME TO BRADEN'S CALCULATOR HAVE FUN!!!!" << endl;
	cout << endl;
	while (quitval == "y")
	{
		cout << "What type of math are you trying to calculate (Physics, Calculus, Basic, Exit): ";
		cin >> math;
		if (math == "Basic")
		{
			b1.print();
		}
		if (math == "Physics")
		{
			p1.print();
		}
		if (math == "Exit")
		{
			break;
		}
			cout << "Would you like to continue? (y/n) ";
			cin >> quitval;
	}
	cout << endl;
	cout << "SEE YOU SOON!!" << endl;
	cout << endl;
}