#include<iostream>
#include<math.h>
#include<limits.h>  
#include<algorithm>  

using namespace std;

  int main(){

  int arr[] = {-2,-1,0,3,3,5};

  int size = sizeof(arr)/4;

  int s = 0;
  int e = size -1;
  int mid = s+(e-s)/2;
  int flag = 0;

  while (s <= e)
  {
    if(arr[mid] == mid){
      flag = 1;
      break;
    }

    if(arr[mid] > mid){
      e = mid-1;
    }else{
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }

  if(flag == 1){
    cout << "found : "<<mid;
  }
      

    return 0;
}