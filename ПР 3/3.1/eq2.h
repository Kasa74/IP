class eq2 {
private:
    double a, b, c;
    double D;

public:
    eq2(double a1, double b1, double c1);


    void set(double a1, double b1, double c1);


    double find_X();


    double find_Y(double x1);


    double get_a();


    double get_b();


    double get_c();


    double get_D();

    
    void print();
};
eq2 operator + (eq2 A, eq2 B);