#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearch(int arr[],int size, int n){

  int s = 0;
  int e = size-1;

  // int mid = s/2 + e/2;
  int mid = s + (e-s)/2;
  while (s <= e)
  {
    if(arr[mid] == n){
      return true;
    }

    if(arr[mid] < n){
      s = mid+1;
    }else{
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return false;
  
}
 
int main()
{
 int arr[] = {3,7,13,15,17,21,12};
 int size = (sizeof(arr)/4);
 sort(arr,arr+size);

 int v = binary_search(arr,arr+size,12);

 cout << "STL binary search : "<< v <<endl;

 int target = 10;
 bool value = binarySearch(arr,size,target);
 cout << "normal search"<<endl;
cout << value << endl;
 
 
 return 0;
}