#include<iostream>
#include<cmath>

using  namespace std;

int main()

{

    double num;
    cout << "Enter the Number"<<endl;
    cin >> num;

    cout << "The sqrt of "<< num <<" is :"<<sqrt(num)<<endl;
    cout << "the cube root of " << num << " is : " <<cbrt(num)<<endl;
    cout << "the sine of " << num << " is : " <<sin(num)<<endl;
    cout << "the cosine of " << num << " is : " <<cos(num)<<endl;
    cout << "the ceil of " << num << " is : " <<ceil(num)<<endl;
    cout << "the floor of " << num << " is : " <<floor(num)<<endl;
    cout << "the round of " << num << " is : " <<round(num)<<endl;

    return 0;
}