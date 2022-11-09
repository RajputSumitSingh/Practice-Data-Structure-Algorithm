#include<iostream>
using namespace std;

int binarySearch(int arr[][3],int target,int row){

  int s = 0;
  int e = 2;

  int mid = s+(e-s)/2;
  while (s <= e)
  {
    if(arr[row][mid] == target){
      return mid;
    }
    if(arr[row][mid] > target){
      e = mid-1;
    }else{
      s = mid+1;
    }

    mid = s+(e-s)/2;
  }
  return -1;
  
}
 
int main()
{
  int arr[3][3] = {1,5,9,14,20,21,30,34,43};

  int target = 43;

  int n=3,m=3;

  int s=0;
  int e = m-1;
  int mid = s+(e-s)/2;
  int flag = 0;

  while (s <= e)
  {

   if(target == arr[mid][m-1]) {
     cout << mid <<" "<< m-1<<endl;
     cout << "found index : "<<m-1<<endl;
     flag = 1;
     break;
   }else if(target == arr[mid][0]){
     cout << mid <<" "<< m-1<<endl;
     cout << "Found index : "<<0<<endl;
     flag = 1;
     break;
   }else if(target < arr[mid][0]){
     e = mid-1;
   }else if(target > arr[mid][m-1]){
     s = mid+1;
   }else if(arr[mid][0] < target && arr[mid][m-1] > target){
     int ans = binarySearch(arr,target,mid);
     if(ans != -1){
        cout << mid <<" "<< m-1<<endl;
        cout << "Found index : "<< ans;
        flag = 1;
        break;
     }else{
       cout << "not found"<<endl;
       flag = 1;
       break;
     }
   }

   mid = s+(e-s)/2;
  }

  if(flag == 0){
    cout << "not found"<<endl;
  }
  
 
 
 
 return 0;
}