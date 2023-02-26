#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

bool Triangle::exst_tr()
{
    return ((a + b > c) && (b + c > a) && (a + c > b));
    }

void Triangle::set(double a1, double b1, double c1) 
{
    a = a1;
    b = b1;
    c = c1;
}

void Triangle::show()
{
    cout << "1 сторона: " << a << endl;
    cout << "2 сторона: " << b << endl;
    cout << "3 сторона: " << c << endl;
}

double Triangle::perimetr() 
{
    double p = a + b + c;
    return p;
}

double Triangle::square() 
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}