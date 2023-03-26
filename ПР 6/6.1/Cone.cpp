#include "Cone.h"
#include <cmath>
#include <iostream>

using namespace std;

Cone::Cone()
{
	x = y = z = radius = height = 0;
}

Cone::Cone(double r, double h) 
{
	x = y = z = 0.0;
	radius = r;
	height = h;
}
Cone::Cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}
void Cone::set(double a, double b, double c, double r, double h)
{
	x = a;
	y = b;
	z = c;

	radius = r;
	height = h;
}
void Cone::print()
{
	cout << "Коориднаты центра основания: " << x << " " << y << " " << z;
	cout << "Радиус основания: " << radius << endl;
	cout << "Высота конуса: " << height << endl;
}
double Cone::area()
{
	double l = sqrt(height * height + radius * radius);
	return 3.14159265 * radius * (radius + 1);
}
double Cone::volume()
{
	return 3.14159265 * radius * radius * height / 3;
}