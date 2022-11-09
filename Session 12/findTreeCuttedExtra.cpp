#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

bool condition(int arr[],int n, int mid,int target){

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] > mid)
      sum += (arr[i]-mid);
  }
  if(sum >= target){
    return true;
  }
  return false;
}

int maxi(int arr[],int n){
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi,arr[i]);
  }
  return maxi;
  
}

int solveValue(int arr[],int n,int target){

  int s=0;
  int e=maxi(arr,n);
  int ans = 0;

  //appliying the binary search
  while(s <= e){

    int mid = s+(e-s)/2;
    if(condition(arr,n,mid,target)){

      ans =  mid;
      s = mid+1;

    }else{

      e = mid-1;

    }

  }
  return ans;
}
 
int main()
{
 int arr[4] = {15,8,18,6};

 int target = 35;
 int ans = solveValue(arr,4,target);
 cout << "The ans is : "<< ans << endl;
 
 
 return 0;
}