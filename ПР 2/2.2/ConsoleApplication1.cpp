#include <iostream>
#include <cmath>
#include "triangle.h"
#include "circle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите стороны треугольника :" << endl;
	cin >> a >> b >> c;
	Triangle ABC(a, b, c);

	float r1, x1, y1;
	cout << "Введите радиус и координаты x и y окружности 1" << endl; 
	cin >> r1 >> x1 >> y1;
	circle circle1(r1, x1, y1);
	cout << "Площадь окружности 1 = " << circle1.square() << endl;
	cout << "Можно ли описать окуржность 1 вокруг треугольника a,b,c : " << circle1.triangle_around(a, b, c) << endl;
	cout << "Можно ли вписать окружность 1 в труегольник a,b,c : " << circle1.triangle_in(a, b, c) << endl;

	float r2, x2, y2;
	cout << "Введите радиус и координаты x и y окружности 2 = " << endl;
	cin >> r2 >> x2 >> y2;
	circle circle2(r2, x2, y2);
	cout << "Площадь окружности 1 = " << circle2.square() << endl;
	cout << "Можно ли описать окуржность 1 вокруг треугольника a,b,c : " << circle2.triangle_around(a, b, c)<< endl;
	cout << "Можно ли вписать окружность 1 в труегольник a,b,c : " << circle2.triangle_in(a, b, c)<< endl;

	float r3, x3, y3;
	cout << "Введите радиус и координаты x и y окружности 3" << endl;
	cin >> r3 >> x3 >> y3;
	circle circle3(r3, x3, y3);
	cout << "Площадь окружности 1 = " << circle3.square() << endl;
	cout << "Можно ли описать окуржность 1 вокруг треугольника a,b,c : " << circle3.triangle_around(a, b, c) << endl;
	cout << "Можно ли вписать окружность 1 в труегольник a,b,c : " << circle3.triangle_in(a, b, c) << endl;


	cout << "Пересекается ли окружность 1 с окружностью 2 : " << circle1.check_circle(r2, x2, y2);
	cout << "Пересекается ли окружность 1 с окружностью 3 : " << circle1.check_circle(r3, x3, y3);
	cout << "Пересекается ли окружность 3 с окружностью 2 : " << circle3.check_circle(r2, x2, y2);
}
