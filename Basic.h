#include <iostream>
using namespace std;
#include <string>

class Basic
{
public:
	Basic();
	~Basic();
	float addition(float a, float b);
	float subtraction(float a, float b);
	float multiplication(float a, float b);
	float division(float a, float b);
	float power(float a, int b);
	void print();

private:
	float result;
};