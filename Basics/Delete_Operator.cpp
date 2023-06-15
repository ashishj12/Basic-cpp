#include<iostream>
using namespace std;

int main()

{

    int *p;
    p = new int; 
    *p = 500;

    cout << "Value in p is : " << *p << endl;

    delete p;

    cout << "value after delete " << *p << endl;
    return 0;
}