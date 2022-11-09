#include<iostream>
using namespace std;

void solve(int leftSum,int rightSum,char *arr,int i, int j){
  //base case
  if(i > j){
    if(leftSum == rightSum){
      cout << arr << endl;
    }
    return;
  }

  //0,0
  arr[i] = '0';
  arr[j] = '0';
  solve(leftSum,rightSum,arr,i+1,j-1);

  //0,1
  arr[i] = '0';
  arr[j] = '1';
  solve(leftSum,rightSum+1,arr,i+1,j-1);

  //1,0
  arr[i] = '1';
  arr[j] = '0';
  solve(leftSum+1,rightSum,arr,i+1,j-1);

  //1,1
  arr[i] = '1';
  arr[j] = '1';
  solve(leftSum+1,rightSum+1,arr,i+1,j-1);


}


int main()
{
 int n = 2;
 int i = 0;
 int j = 2*n-1;

 char *arr = new char[2*n];

 solve(0,0,arr,i,j);
 
 return 0;
}