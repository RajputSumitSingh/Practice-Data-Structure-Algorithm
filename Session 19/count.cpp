#include<iostream>
using namespace std;

void solve(int n){
  //base case
  if(n == 0){
    return;
  }

  solve(n-1);
  cout << n << endl;
}
 
int main()
{
 
 int n = 10000;
 solve(n);
 
 return 0;
}