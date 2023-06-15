#include <iostream>
using namespace std;

// Initialization of base class
class Base {
public:
	virtual ~Base() = 0;
	// Pure virtual destructor
};

// Initialization of derived class
class Derived : public Base {
public:
	~Derived() { cout << "~Derived() is executed"; }
};
int main()
{
	Base* b = new Derived();
	delete b;
	return 0;
}
