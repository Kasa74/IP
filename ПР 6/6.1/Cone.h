class Cone {
    double x, y, z;        // ���������� ����������
    double radius;         // ������
    double height;         // ������
public:
    // ����������� �� ���������
    Cone();
    // ����������� � ������� � ������ ���������
    Cone(double r, double h);
    // ����������� ��� Cone
    Cone(double a, double b, double c, double r, double h);

    // ������� �������
    void set(double x, double y, double z, double r, double h);

    // ����� ������
    void print();

    // ������� �����������
    double area();

    // ����� ������
    double volume();
};