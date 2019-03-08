#include "Physics.h"

const float gravity = 9.81;

Physics::Physics()
{
	result = 0.0;
}

Physics::~Physics()
{

}

float Physics::avgvel(float x1, float x2, float t1, float t2)
{
	result = (x2 - x1) / (t2 - t1);
	return result; 
}

float Physics::avgacc(float v1, float v2, float t1, float t2)
{
	result = (v2 - v1) / (t2 - t1);
	return result;
}
void Physics::print()
{
	float a1, a2;
	Physics p;
	string phys;
	string quitval = "y";
	while (quitval == "y")
	{
		cout << "Enter your command (help for list of commands)): ";
		cin >> phys;
		if (phys == "help")
		{
			cout << "COMMANDS FOR TEST 1: avgvel, avgacc, Exit " << endl;
		}
		if (phys == "Exit")
		{
			break;
		}
		if (phys == "avgvel")
		{
			float xpos = 0, xpos2 = 0;
			float time1 = 0, time2 = 0;
			cout << "Enter in your initial x position and final x position (in meters): ";
			cin >> xpos >> xpos2;
			cin.ignore();
			cout << "Enter in your initial time and final time (in seconds): ";
			cin >> time1 >> time2;
			cin.ignore();
			cout << "The result is: " << p.avgvel(xpos, xpos2, time1, time2) << "m/s" << endl;
		}
		if (phys == "avgacc")
		{
			float vpos = 0, vpos2 = 0;
			float time1 = 0, time2 = 0;
			cout << "Enter in your initial velocity and final velocity (in meters per second): ";
			cin >> vpos >> vpos2;
			cout << "Enter your initial time and final time (in seconds): ";
			cin >> time1 >> time2;
			cout << "The result is " << p.avgacc(vpos, vpos2, time1, time2) << " m/s^2" << endl;

		}
	}
	
}