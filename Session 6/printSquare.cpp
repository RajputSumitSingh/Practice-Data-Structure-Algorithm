#include<iostream>
#include<math.h>
using namespace std;
 
int findSquare(int n){
  return n*n;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int ans = findSquare(i);
    cout <<  ans <<endl;
  }
  
 
 
 
 return 0;
}