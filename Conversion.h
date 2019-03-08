#include <iostream>
using namespace std;
#include <string>
#include <cmath>

class Conversion
{
public:
	Conversion();
	~Conversion();
	float lbstooz(float lbs);
	float fttom(float feet);
	float intocm(float in);

	void print();

private:
	float result;
};

