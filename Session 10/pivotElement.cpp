#include<iostream>
using namespace std;

int findPivot(int arr[],int n){
  int s=0;
  int e=n-1;
  int mid = s+(e-s)/2;

  while (s < e)
  {
    if(arr[mid] >= arr[0]){
      s = mid+1;
    }else{
      e = mid;
    }
    mid = s+(e-s)/2;
  }
  return e;
  
}
 
int main()
{
//  int arr[11]= {10,11,12,13,1,2,3,4,5,6,8};
 int arr[5]= {6,1,2};
  int size = 5;
  int pivot = findPivot(arr,size);
  cout<< arr[pivot]<<endl;
 
 
 return 0;
}