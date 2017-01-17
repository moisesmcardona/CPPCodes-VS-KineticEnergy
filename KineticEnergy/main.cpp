#include <iostream>
#include <iomanip>
using namespace std;

float getmass();
float getvelocity();
float calculate(float mass, float velocity);
void display(float ke);

void main()
{
	float mass, velocity, ke;
	mass = getmass();
	velocity = getvelocity();
	ke = calculate(mass, velocity);
	display(ke);
}
float getmass()
{
	float mass;
	do
	{
		cout << "Enter the mass (kg): ";
		cin >> mass;
	} while (mass <= 0.0);
	return mass;
}
float getvelocity()
{
	float velocity;
	velocity = 0.0;
	while (velocity <= 0.0)
	{
		cout << "Enter the velocity (meters per seconds): ";
		cin >> velocity;
	}
	return velocity;
}
float calculate(float mass, float velocity)
{
	float ke;
	ke = 0.5 * mass * (velocity * velocity);
	return ke;
}
void display(float ke)
{
	cout << "The Kinetic Energy is: " << setprecision(2) << fixed << showpoint << ke << " J\n";
	system("pause");
}
/*
Enter the mass (kg): 5
Enter the velocity (meters per seconds): 20
The Kinetic Energy is: 1000.00 J
Press any key to continue . . .
*/