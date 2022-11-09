#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
 int n;
 cout << "Enter the digit to convert into binary : ";
 cin >> n;

 int ans = 0;
 int i = 0;

 while (n != 0)
 {
   int bit = n & 1;
   ans = ans + bit * pow(10 , i++);
   n = n >> 1;
 }

 cout << "The ans of binary code is : "<< ans << endl;
 
 
 
 return 0;
}