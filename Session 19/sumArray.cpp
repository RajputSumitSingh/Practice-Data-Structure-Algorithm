#include<iostream>
using namespace std;

int sumArray(int *arr,int size,int ans = 0){
  //base case
  if(size == 0){
    return 0;
  }
  if(size == 1 ){
    return arr[0];
  }
  // cout << ans << endl;
  ans += arr[0]+sumArray(arr+1,size-1);
  return ans;

}
 
int main()
{
 int arr[] = {2,3,8,1,9};
 int size = sizeof(arr)/4;

 int ans = sumArray(arr,size);
 cout << ans;
 
 return 0;
}