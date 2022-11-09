#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
  int n;
  cout  << "Enter the Binary digit To change : ";
  cin>> n;

  int ans = 0;
  int i = 0;
  while (n != 0)
  {
    int digit = n%10;
    ans = ans + pow(2,i) * digit;
    i++;
    n = n/10;
  }

  cout << "The Decimal digit is : "<< ans <<endl;
  
 
 
 
 return 0;
}