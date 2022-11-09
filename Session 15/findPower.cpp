#include<iostream>
using namespace std;
 
int main()
{
 int a=2,b=10;
 int temp = b;

 int ans = 1;
 while(b >= 1)
 {
    ans *= a*a;
    b = b - 2;
   //  cout << ans <<endl;
 }

 if(temp & 1){
 cout <<"ans1 : "<< ans*a;
 }else{
 cout <<"ans2 : "<< ans;
 }

 
 
 
 return 0;
}