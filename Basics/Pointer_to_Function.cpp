#include<iostream>

using namespace std;

void fun(int a)
{
    cout<<"value of a is : "<<a<<endl;
}

int main()

{
    //fun_ptr is a pointer to function fun()

    void(*fun_ptr)(int) = &fun;
    
    return 0;
}   