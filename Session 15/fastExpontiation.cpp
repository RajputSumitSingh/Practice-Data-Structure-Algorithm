#include<iostream>
using namespace std;
 
int main()
{
 int a=2, b = 6;
 int ans = 1;
 while(b){
   if(b&1){
     ans *= a;
   }
   a = a*a;
   b = b >> 1;
 }

 cout << ans;


 
 
 
 
 return 0;
}