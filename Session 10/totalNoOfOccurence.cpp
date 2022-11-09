#include<iostream>
using namespace std;

int findFirstPos(int arr[], int size, int target){

  int s = 0;
  int e = size-1;
  int mid = s+(e-s)/2;
  int ans = 0;
  int flag = 0;

  while (s <= e)
  {
    if(arr[mid] == target){
      ans = mid;
      flag = 1;
      e = mid -1;
    }

    if(arr[mid] > target){
      e = mid -1;
    }else{
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }

  //printing the element
  if(flag == 1){
    return ans;
  }else{
return -1;  }
  

}

//finding the last position of element
int findLastPos(int arr[], int size, int target){

  int s = 0;
  int e = size-1;
  int mid = s+(e-s)/2;
  int ans = 0;
  int flag = 0;

  while (s <= e)
  {
    if(arr[mid] == target){
      ans = mid;
      flag = 1;
      s = mid +1;
    }

    if(arr[mid] > target){
      e = mid -1;
    }else{
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }

  //printing the element
  if(flag == 1){
   return ans;
  }else{
    return -1;
    }
  

}
 
int main()
{
 int arr[] = {1,2,2,2,3,4,5,5,6};
 int size = sizeof(arr)/4;

 int target = 5;

 int first = findFirstPos(arr,size,target);
 int last = findLastPos(arr,size,target);

 if(first != -1 && last != -1){
   cout << "The total no. of occurence is : "<< (last-first+1)<<endl;
 }else{
   cout << "Your entered wrong answer"<<endl;
 }
 
 
 return 0;
}