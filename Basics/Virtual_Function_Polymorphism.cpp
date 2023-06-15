#include <iostream>
using namespace std;

class Shape {
public:
	// Usage of virtual constructor
	virtual void calculate()
	{
		cout << "Area of your Shape ";
	}
	// usage of virtual Destuctor to avoid memory leak
	virtual ~Shape()
	{
		cout << "Shape Destuctor Call\n";
	}
};

// Declaration of Derived class
class Rectangle : public Shape {
public:
	int width, height, area;

	void calculate()
	{
		cout << "Enter witdh of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}

	// Virtual Destuctor for every Derived class
	virtual ~Rectangle()
	{
		cout << "Rectangle Destuctor Call\n";
	}
};

// Declaration of 2nd derived class
class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area << "\n";
	}

// Virtual Destuctor for every Derived class
	virtual ~Square()
	{
		cout << "Square Destuctor Call\n";
	}
};

int main()
{


	Shape* S;
	Rectangle r
	S = &r;
	S->calculate();
	Square sq;
	S = &sq;
	S->calculate();
	return 0;
}
