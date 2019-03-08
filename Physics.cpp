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

float Physics::relvel(float v1, float v2)
{
	result = v2 - v1;
	return result;
}

float Physics::inclplane(float ang)
{
	result = gravity * sin(ang);
	return result;
}

float Physics::momentum(float mass, float velocity)
{
	result = mass * velocity;
	return result;
}

float Physics::totalmomentum(float totalmass, float vcm)
{
	result = totalmass * vcm;
	return result;
}

float Physics::kineticE(float mass, float v)
{
	result = .5 * mass * (v * v);
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
			cout << "COMMANDS FOR TEST 1: avgvel, avgacc, relvel, inclplane, momentum, totalmomentum " << endl;
			cout << endl;
			cout << "COMMANDS FOR TEST 2: kinetic, ksys, kcm, kconv, restitution, totalE, force, springpot " << endl;
			cout << endl;
			cout << "PROGRAM COMMANDS: help, exit" << endl;
			cout << endl;
		}
		if (phys == "exit")
		{
			break;
		}
		if (phys == "avgvel")
		{
			float xpos = 0, xpos2 = 0;
			float time1 = 0, time2 = 0;
			cout << "Enter in your initial x position and final x position (in meters): ";
			cin >> xpos >> xpos2;
			cout << "Enter in your initial time and final time (in seconds): ";
			cin >> time1 >> time2;
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
		if (phys == "relvel")
		{
			float vpos = 0, vpos2 = 0;
			cout << "Enter in your velocity of object 1 and velocity of object 2 (in meters per second): ";
			cin >> vpos >> vpos2;
			cout << "The result is " << p.relvel(vpos, vpos2) << " m/s" << endl;
		}
		if (phys == "inclplane")
		{
			float ang = 0;
			cout << "Enter in your angle (in degrees): ";
			cin >> ang;
			cout << "The result is " << p.inclplane(ang) << " m/s^2" << endl;
		}
		if (phys == "momentum")
		{
			float mass = 0, vel = 0;
			cout << "Enter the mass of the object (in kilograms): ";
			cin >> mass;
			cout << "Enter the objects velocity (in meters per second): ";
			cin >> vel;
			cout << "The result is " << p.momentum(mass, vel) << " kg * m/s" << endl;
		}
		if (phys == "totalmomentum")
		{
			float tmass = 0, velcm = 0;
			cout << "Enter the total mass of the system (in kilograms): ";
			cin >> tmass;
			cout << "Enter the center of mass velocity (in meters per seconds): ";
			cin >> velcm;
			cout << "The result is " << p.totalmomentum(tmass, velcm) << " kg * m/s" << endl;
		}
		if (phys == "kinetic")
		{
			float m = 0, vel = 0;
			cout << "Enter the mass of the object (in kilograms): ";
			cin >> m;
			cout << "Enter the velocity of the object (in meters per seconds): ";
			cin >> vel;
			cout << "The result is " << p.kineticE(m, vel) << " Joules" << endl;
		}
	}
	
}