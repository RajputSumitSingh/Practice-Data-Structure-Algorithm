#include<iostream>
using namespace std;


int partition(int *arr,int s, int e){
  
  int pivot = arr[s];
  int cnt = 0;

  //count of pivot element's small element in array
  for (int i = s+1; i <= e; i++)
  {
    if(arr[i] <= pivot)
      cnt++;
  }

  int i = s;
  int j = e;
  int pivotIndex = s+cnt;

  //swapping of s and pivotIndex elemtn
  swap(arr[s],arr[pivotIndex]);

  while (i < pivotIndex && j > pivotIndex)
  {
    while (arr[i] <= arr[pivotIndex])
    {
      i++;
    }

    while(arr[j] > arr[pivotIndex]){
      j--;
    }

    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++],arr[j--]);
    }
    
  }
  return pivotIndex;
  
}


void quickSort(int *arr,int s,int e){
  //base case
  if(s >= e){
    return;
  }

  int p = partition(arr,s,e);

  //left part
  quickSort(arr,s,p-1);

  //right part
  quickSort(arr,p+1,e);

}
 
int main()
{
 int arr[] = {2,6,9,1,5,3,88,3};
 int size = sizeof(arr)/4;

 int s = 0;
 int e = size-1;

 quickSort(arr,s,e);

 for (int i = 0; i < size; i++)
 {
   cout << arr[i]<<" ";
 }
 
 
 
 return 0;
}