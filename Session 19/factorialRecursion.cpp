#include<iostream>
using namespace std;

int fact(int n){
  //base case
  if(n == 0)
    return 1;
  
  //recurance relation
  return n * fact(n-1);
}
 
int main()
{
 int n = 5;

 int ans = fact(n);
 cout << "Factorial is : "<<ans<<endl;
 
 return 0;
}