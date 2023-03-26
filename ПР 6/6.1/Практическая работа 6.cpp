#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"
using namespace std;

int main()
{
    int x, y, z, r, h;
    setlocale(LC_ALL, "Russian");

    // 1
    cout << "Конус с центром в начале координат, задайте радиус и высоту";
    cin >> r >> h;
    Cone c1(r, h);
    cout << "Площадь поверхности: " << c1.area() << endl;
    cout << "Объем конуса: " << c1.volume() << endl;

    // 2
    cout << "Задайте координаты основания второго конуса: ";
    cin >> x >> y >> z;
    cout << "Задайте радиус и высоту второго конуса: ";
    cin >> r >> h;
    Cone c2(x, y, z, r, h);
    cout << "Площадь поверхности: " << c2.area() << endl;
    cout << "Объем конуса: " << c2.volume() << endl;

    // 3
    Cone* c3 = new Cone();
    cout << "Задайте координаты основания динамического конуса: ";
    cin >> x >> y >> z;
    cout << "Задайте радиус и высоту динамического конуса: ";
    cin >> r >> h;
    c3->set(x, y, z, r, h);
    c3->print();
    delete c3;

    // 4
    int n = 3;
    Cone* A = new Cone[n];
    for (int i = 0; i < n; i++) 
    {
        A[i] = Cone(1, 1, 1, 1, 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << '\n';
        A[i].print();
    }
    delete[] A;
}