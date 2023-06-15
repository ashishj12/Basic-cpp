#include<iostream>
using namespace std;

int main()
{
int x, *p, **q;
x=10;
p=&x;
q=&p;
// print the value of x
cout << **q<<endl;
return 0;
}
