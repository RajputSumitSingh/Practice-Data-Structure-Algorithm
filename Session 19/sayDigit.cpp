#include<iostream>
using namespace std;

void sayDigit(string arr[],int n){

  //base case
  if(n == 0)
    return;

  //processing part
  int digit = n % 10;

  //recursive part
  sayDigit(arr,n/10);
  cout << arr[digit]<<" ";
}
 
int main()
{
 int n = 143;
 string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 
 sayDigit(arr,n);
 
 return 0;
}