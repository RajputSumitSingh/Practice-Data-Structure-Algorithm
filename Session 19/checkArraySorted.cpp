#include<iostream>
using namespace std;

bool check(int *arr,int size){
  //base case
  if(size == 0 || size == 1){
    return true;
  }
  if(arr[0] > arr[1]){
    return false;
  }

  //recursive part
  // cout <<size<<endl;
  return check(arr+1,size-1);
  
}
 
int main()
{
 int arr[] = {2,3,5,6,9,13,16};
 int size = sizeof(arr)/4;

 bool ans = check(arr,size);

 cout << ans;
 
 
 return 0;
}