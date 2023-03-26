class Cone {
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
public:
    // Конструктор по умолчанию
    Cone();
    // Конструктор с центром в начале координат
    Cone(double r, double h);
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h);

    // Функции доступа
    void set(double x, double y, double z, double r, double h);

    // Вывод конуса
    void print();

    // Площадь поверхности
    double area();

    // Объем конуса
    double volume();
};