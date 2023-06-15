#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout << "Constructor is called"<<endl;     //Constructor
    }
    ~Test(){
        cout << "Destructor is called "<<endl;     //Destructor
    }
    int display(){
        cout << "This is a test program."<<endl;
    }
};
int main()
{
    Test obj1;
    obj1.display();
    return 0;
}