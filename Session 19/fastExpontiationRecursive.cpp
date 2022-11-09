#include<iostream>
using namespace std;

int solve(int a,int b){

  //base case
  if(b <= 0){
    return 1;
  }
  if(b == 1){
    return a;
  }

  //processing part
  int v = solve(a,b/2);

  if(b & 1){
    return v *v*a;
  }else{
    return v* v;
  }
}
 
int main()
{
 int a = 2;
 int b = 10;

 cout << "ans : "<<solve(a,b);
 
 
 return 0;
}