#include <iostream>
using namespace std;
#include <string>

class Physics
{
public:
	Physics();
	~Physics();
	float avgvel(float x1, float x2, float t1, float t2);
	void print();
	float avgacc(float v1, float v2, float t1, float t2);
	float relvel(float v1, float v2);
	float inclplane(float ang);
	float momentum(float mass, float v);
	float totalmomentum(float totalmass, float vcm);
	float kineticE(float mass, float v);
	float ksys();
	float ktrans(float totalmass, float vcm);
	float kconv(float diffmass, float relvel);
	float restituition(float relveli, float relvelf);
	float totalE(float kinetic, float potential, float diss, float other);
	float force(float mass, float acceleration);
	float springpotential(float k, float spring);
	


	bool isMomentumConserved(float m1, float m2, float v1i, float v2i, float v1f, float v2f);


private:
	float result;
};
