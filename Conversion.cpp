#include "Conversion.h"

Conversion::Conversion()
{
	result = 0;
}

Conversion::~Conversion()
{

}

float Conversion::lbstooz(float lbs)
{
	result = lbs * 16;
	return result;
}

float Conversion::fttom(float ft)
{
	result = ft * 3.048;
	return result;
}

void Conversion::print()
{
	Conversion c;
	string con;
	string quitval = "y";
	while (quitval == "y")
	{
		cout << "Enter a command (help for list of commands): ";
		cin >> con;

		if (con == "help")
		{
			cout << "COMMANDS: lbstooz, fttom, exit" << endl;
		}
		if (con == "lbstooz")
		{
			float pound = 0;
			cout << "Enter the amount of pounds: ";
			cin >> pound;
			cout << "The result is: " << c.lbstooz(pound) << " oz" << endl;
		}
		if (con == "fttom")
		{
			float ft = 0;
			cout << "Enter the amount of feet: ";
			cin >> ft;
			cout << "The result is: " << c.fttom(ft) << " m" << endl;
		}
		if (con == "exit")
		{
			break;
		}
	}

}