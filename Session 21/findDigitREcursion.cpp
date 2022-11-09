#include<iostream>
using namespace std;

void solve(int n){
  //base case
  if(n == 0){
    return;
  }
  int digit = n % 10;

  //recursiion case
  solve(n/10);
  cout << digit << endl;
}
 
int main()
{
 int n = 123;

 solve(n);
 
 
 return 0;
}