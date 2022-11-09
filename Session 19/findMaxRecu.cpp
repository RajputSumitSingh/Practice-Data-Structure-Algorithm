#include<iostream>
using namespace std;

int solve(int *arr,int size, int maxi = INT8_MIN){
  //base case
  if(arr[0] > maxi){
    maxi = arr[0];
  }

  if(size == 1)
    return maxi;

  if(size == 0){
    return -1;
  }
  

  return solve(arr+1,size-1,maxi);
}
 
int main()
{
 int arr[] = {4,2,6,9,1,0,12};
//  int arr[] = {1,2,44,1};
 int size = sizeof(arr)/4;

 int ans = solve(arr,size);
 cout << ans;
 
 return 0;
}