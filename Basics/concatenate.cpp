#include <iostream>
using namespace std;
int main()
{
char s1[100], s2[100], i, j;
cout <<"Enter first string: "<<endl;
cin>>s1;
cout << "Enter second string: "<<endl;
cin >> s2;
// calculate the length of string s1
// and store it in i
for(i = 0; s1[i] != '\0'; ++i);
for(j = 0; s2[j] != '\0'; ++j, ++i)
{
s1[i] = s2[j];
}
s1[i] = '\0';
cout << "After concatenation: "<<s1<<endl  ;
return 0;
}