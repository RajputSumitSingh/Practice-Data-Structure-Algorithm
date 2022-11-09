#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int target){
  //base case
  if(target == arr[0]){
    return true;
  }
  if(size == 1 && target != arr[0]){
    return false;
  }

  //recursive case
  return linearSearch(arr+1,size-1,target);
}
 
int main()
{
 
 int arr[] = {2,4,6,7,9,16,19,34};
 int size = sizeof(arr)/4;
 int target = 8;

 bool ans = linearSearch(arr,size,target);
 cout << ans;
 return 0;
}