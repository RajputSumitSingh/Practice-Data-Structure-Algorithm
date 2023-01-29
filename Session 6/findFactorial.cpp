#include<iostream>
using namespace std;

 void factorial(int n){
   
 int ans = 1;
 for (int i = 2; i <= n; i++)
 {
   ans *= i;
 }

 cout << ans;
 
 }
int main()
{
 int n;
 cin >> n;

 factorial(n);
 
 return 0;
}