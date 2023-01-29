#include<iostream>
using namespace std;
int fact(int n){
  int ans;

  for (int i = 1; i <= n; i++)
  {
    ans *= i;
  }
  return ans;
  
}

int nCr(int n, int r){
  
  int ans = fact(n)/(fact(n-r)*fact(r));
  return ans;
}
 
int main()
{
 int n = 1, b = 1;
//  cin >> n;
int ans = nCr(1,1);
cout << ans <<endl;
 
 
 return 0;
 //my name is sumit
}