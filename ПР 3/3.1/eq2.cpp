#include <iostream>
#include <cmath>
#include "eq2.h"
using namespace std;


eq2::eq2(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}


void eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}


double eq2::find_X() {
        if (D < 0) {
            cout << "Корней нет" << endl;
            return 0;
        }
        else {
            if (D == 0) {
                cout << "Корень один: " << endl;
                double x = (-b - sqrt(D)) / (2 * a);
                cout << x << endl;
                return x;
            }
            else {
                cout << "Корней 2, наибольший: " << endl;
                double x1 = (-b - sqrt(D)) / (2 * a);
                double x2 = (-b + sqrt(D)) / (2 * a);
                if (x1 > x2) {
                    cout << x1 << endl;
                    return x1;
                }
                else {
                    cout << x2 << endl;
                    return x2;
                }
            }
        }
    }


double eq2::find_Y(double x1) {
        return a * x1 * x1 + b * x1 + c;
}


double eq2::get_a() {
    return a;
}


double eq2::get_b() {
    return b;
}


double eq2::get_c() {
    return c;
}


double eq2::get_D() {
    return D;
}


eq2 operator + (eq2 A, eq2 B) {
    eq2 summa(A.get_a() + A.get_a(), A.get_b() + B.get_b(), A.get_c() + B.get_c());
    return summa;
}

void eq2::print()
{
    std::cout << a << "x^2 ";

    if (b > 0) std::cout << '+';
    std::cout << b << "x ";

    if (c > 0) std::cout << '+';
    std::cout << c << '\n';
}