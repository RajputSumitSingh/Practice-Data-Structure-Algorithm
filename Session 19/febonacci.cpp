#include<iostream>
#include<map>
using namespace std;

map<int,bool>m;

int fib(int n){
  //base case
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  int ans =  fib(n-1) + fib(n-2);
  if(m[ans] != true)
    cout << ans << endl;

  m[ans] = true;

  return ans;
}
int main()
{
 int n = 50;
 

 fib(n);
 
 
 return 0;
}