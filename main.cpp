#include "Basic.h"
#include "Physics.h"

int main()
{
	Physics p1;
	Basic b1;
	string quitval = "y";
	string math;
	while (quitval == "y")
	{
		cout << "What type of math are you trying to calculate (Physics, Calculus, Basic): ";
		cin >> math;
		if (math == "Basic")
		{
			b1.print();
		}
		if (math == "Physics")
		{
			p1.print();
		}
			cout << "Would you like to continue? (y/n) ";
			cin >> quitval;
	}
}