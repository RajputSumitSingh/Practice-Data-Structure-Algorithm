#include<iostream>
using namespace std;

bool binarySearch(int s,int e,int *arr,int target){
  //base case
  int mid = s+(e-s)/2;
  if(s>e){
    return false;
  }
  if(arr[mid ] == target){
    return true;
  }

  //recursive case
  if(arr[mid] > target){
   return binarySearch(s,mid-1,arr,target);
  }else{
   return binarySearch(mid+1,e,arr,target);
  }
  return false;
}

int main()
{
 int arr[] = {2,4,6,9,12,15,19,32};
 int size = sizeof(arr)/4;
 int target = 15;
 int s = 0;
 int e = size -1;

 bool ans = binarySearch(s,e,arr,target);

 cout << ans;
 
 
 return 0;
}