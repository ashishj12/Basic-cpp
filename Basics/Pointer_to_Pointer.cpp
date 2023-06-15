#include<iostream>

using namespace  std;

int main()

{

    int var =100;
    int* ptr2;//pointer for var
    int** ptr1; //double pointer for ptr
    
    ptr2 = &var;   //storing address of var in ptr2
    ptr1 = &ptr2;   //storing addrees of ptr2 in ptr1

    cout<<"value of var "<<var<<endl;
    cout<<"value of var using single pointer "<<*ptr2<<endl;
    cout<<"value of var using double pointer "<<**ptr1<<endl;
    return 0;
}