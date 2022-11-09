#include<iostream>
using namespace std;

int power(int n,int value){
  //base case
  if(n == 0){
    return 1;
  }

  return value * power(n-1,value);
}
 
int main()
{
  int n = 4;
  int value = 2;

  int ans = power(n,value);
 
 cout << "Ans : "<< ans <<endl;
 
 return 0;
}