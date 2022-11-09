#include <iostream>
using namespace std;


// Euclidean algorithms using substraction
int gcd(int a, int b)
{

  if (a == 0)
    return b;

  if (b == 0)
    return a;

  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }

  return a;
}

// Euclidean algorithms using modulo operator
int gcd2(int a,int b){
  if(a == 0)
    return b;
  if(b == 0)
    return a;
  while(a !=0 && b != 0){
    cout << a<<" : "<<b<<endl;
    if(a>b){
      a = a%b;
    }else{
      b = b%a;
    }
  }
  return a>b ? a : b;
}

int main()
{
  int a = 36, b = 60;
  int ans;
  // int ans = gcd(a, b);
  
  //second approach
    ans = gcd2(a,b);
  // if(a > b){
  // }else{
  //   ans = gcd2(b,a);
  // }
  cout << "The ans is : " << ans;

  return 0;
}