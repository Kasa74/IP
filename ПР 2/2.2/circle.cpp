#include "circle.h"
#include <iostream>
#include <cmath>
#include "triangle.h"

circle::circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float circle::square(){
	return 3.14 * radius * radius;
}

bool circle::triangle_around(double a, double b, double c) {
	Triangle ABC(a,b,c);
	return (radius = (a * b * c) / (4 * ABC.square()));
}

bool circle::triangle_in(double a, double b, double c) {
	Triangle ABC(a, b, c);
	return (radius = ABC.square() / ((a + b + c) / 2));
}

bool circle::check_circle(float r, float x_cntr, float y_cntr) {
	double distance = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
	return (distance < r + radius);
}