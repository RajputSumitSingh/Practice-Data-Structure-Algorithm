//to check given no. is power of 2's of not.
#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cout << "Enter the no. : ";
 cin >> n;

 if (n <= 0)
 {
   cout << false <<endl;
 }

 int ans = (n & (n - 1));
 cout << (ans == 0);
 
 
 
 return 0;
}