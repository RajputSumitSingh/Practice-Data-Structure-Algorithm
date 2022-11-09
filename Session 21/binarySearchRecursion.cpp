#include<iostream>
using namespace std;

bool find(int *arr,int s,int e,int target){

  //base case
  if(s > e){
    return false;
  }

  int mid = s+(e-s)/2;

  if(arr[mid] == target){
    return true;
  }
  if(arr[mid] > target){
    e = mid-1;
    return find(arr,s,e,target);
  }
  else{
    s = mid+1;
    return find(arr,s,e,target);
  }
}
 
int main()
{
 int arr[] = {2,5,8,9,10,14,19};

 int size = sizeof(arr)/4;
 int s = 0;
 int e = size-1;
 int target = 5;

 cout << find(arr,s,e,target);
 
 
 return 0;
}