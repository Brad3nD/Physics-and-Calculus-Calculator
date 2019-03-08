#include "Basic.h"

Basic::Basic()
{
	result = 0;
}

Basic::~Basic()
{

}

float Basic::addition(float a, float b)
{
	result = a + b;
	return result;
}

float Basic::subtraction(float a, float b)
{
	result = a - b;
	return result;
}

float Basic::multiplication(float a, float b)
{
	result = a * b;
	return result;
}

float Basic::division(float a, float b)
{
	result = a / b;
	return result;
}

float Basic::power(float a, int b)
{
	if (b == 0)
		return 1;
	else if (b == 1)
		return a;

	else if (b < 0)
		return 1.0 / power(a, -b);

	else if (b % 2 == 0)
	{
		float temp = power(a, b / 2);       // A
		return temp * temp;
	}
	else if (b % 2 == 1)
	{
		float temp = power(a, b / 2);       // B
		return a * temp * temp;
	}
	else
		return 0.0;
}

void Basic::print()
{
	char ch;
	float a1, a2;
	Basic b;

	cout << "Enter your operation (+,-,/,^,or *): ";
	cin >> ch;
	cout << "Enter your first number and second number : ";
	cin >> a1 >> a2;

	if (ch == '+')
	{
		cout << "The result is: " << b.addition(a1, a2) << endl;
	}
	if (ch == '-')
	{
		cout << "The result is: " << b.subtraction(a1, a2) << endl;
	}
	if (ch == '*')
	{
		cout << "The result is: " << b.multiplication(a1, a2) << endl;
	}
	if (ch == '/')
	{
		cout << "The result is: " << b.division(a1, a2) << endl;
	}
	if (ch == '^')
	{
		cout << "The result is: " << b.power(a1, a2) << endl;
	}
}