#include <iostream>
using namespace std;

class rectangle
{
	private:
		double length;
		double width;
		double area()
		{
			return length*width;
		}
	public:
		void set_dimensions(double l1, double w1 = 6)
		{
			length = l1;
			width = w1;
		}
		double perimeter();
		void print_area()
		{
			cout << "Area: " << area() << endl;
		}
};

double rectangle::perimeter()
{
	return 2*(length+width);
};

int main()
{
	rectangle rec1;
	rec1.set_dimensions(2,3);
	cout << "Perimeter: " << rec1.perimeter() << endl;
	rec1.print_area();

	rectangle rec2;
	rec2.set_dimensions(6);
	cout << "Perimter: " << rec2.perimeter() << endl;
	rec2.print_area();
	return 0;
}
