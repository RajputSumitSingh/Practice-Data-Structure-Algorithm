#include<iostream>
using namespace std;

int solve(int n, int sum = 0){
  //base case
  if(n == 0){
    return sum;
  }
  int digit = n %10;
  sum = sum*10+digit;
  return solve(n/10,sum);
}
 
int main()
{
 int n = 516;

 cout << "reverse : " << solve(n);
 
 
 return 0;
}