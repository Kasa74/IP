#include <iostream>
#include <cmath>
#include "eq2.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // первое уравнение
    double a, b, c;
    cout << "коэффициенты первого : ";
    cin >> a >> b >> c;
    eq2 first(a, b, c);

    double a, b, c;
    cout << "коэффициенты второго : ";
    cin >> a >> b >> c;
    eq2 second(a, b, c);

    double x1;
    cout << "x =";
    cin >> x1;

    double X = first.find_X();
    cout << "Наибольший корень первого  =" << X << endl;
    cout << "Наибольшее значение первого многочлена при X = x1 = " << first.find_Y(x1) << endl;


    double X = second.find_X();
    cout << "Наибольший корень второго  =" << X << endl;
    cout << "Наибольшее значение второго многочлена при X = x1 = " << second.find_Y(x1) << endl;

    eq2 result = first + second;
    cout << "Результат сложения многочленов";
    result.print();
}