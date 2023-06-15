#include <iostream>
using namespace std;
class complex
{
private:
float real;
float imaginary;
public:
void getdata()
{
real=3.5;
imaginary=7.5;
}
void putdata()
{
cout<<real<<" +i"<<imaginary;
}
};
int main()
{
complex c;
c. getdata();c. putdata();
return 0;
}