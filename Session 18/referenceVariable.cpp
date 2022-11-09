#include<iostream>
using namespace std;
 
int main()
{
 int i = 5;
 const int k = 8;

 int &j = i;//reference variable
//  i++;
 cout << --i<<" : "<<j<<endl;
 cout << "j : "<<j<<endl;
 
 
 return 0;
}