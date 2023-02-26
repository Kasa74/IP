class circle {

private:

	float radius;

	float x_center;

	float y_center;

public:

	circle(float r, float x, float y);

	void set_circle(float r, float x, float y);

	float square();
	
	bool triangle_around(double a, double b, double c);

	bool triangle_in(double a, double b, double c);

	bool check_circle(float r, float x_cntr, float y_cntr);

};
