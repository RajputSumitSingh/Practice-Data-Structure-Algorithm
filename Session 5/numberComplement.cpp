#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cout << "Enter the no. for complement : ";
 cin >> n;

 int mask = 0;
 while(n > mask){

   mask = (mask << 1) | 1;

 }
 int ans = (~n) & mask;

 cout << "The complement of given number : "<<ans<<endl;
 
 
 return 0;
}