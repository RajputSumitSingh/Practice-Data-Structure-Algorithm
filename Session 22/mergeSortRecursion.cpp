#include<iostream>
using namespace std;

void merge(int *arr,int s,int mid, int e){

  int n1 = mid-s+1;
  int n2 = e - mid;

  int *first = new int[n1];
  int *second = new int[n2];

  // copy left array
  int originalIndex = s;
  for (int i = 0; i < n1; i++)
  {
    first[i] = arr[originalIndex++];
    // cout << "first : "<< first[i]<<" ";
  }
  cout << endl;
  //copy right arrya
  for (int i = 0; i < n2; i++)
  {
    second[i] = arr[originalIndex++];
    // cout << "second : "<< second[i]<<" ";
  }

  int i = 0;
  int j = 0;
  int mainArrayIndex = s;
  while (i < n1 && j < n2)
  {
    if(first[i] <= second[j]){
      arr[mainArrayIndex++] = first[i++];
    }else{
      arr[mainArrayIndex++] = second[j++];
    }
  }

  while (i < n1)
  {
     arr[mainArrayIndex++] = first[i++];
  }

  while (j < n2){
    arr[mainArrayIndex++] = second[j++];
  }
  

    delete []first;
    delete []second;
  
  
  
}

void mergeSort(int *arr,int s,int e){
  if(s >= e){
    return;
  }
  int mid = s+(e-s)/2;
  //right part divide
  mergeSort(arr,s,mid);

  //right part divide
  mergeSort(arr,mid+1,e);

  //merge two sorted array
  merge(arr,s,mid,e);
}
 
int main()
{
 int arr[] = {2,6,9,1,5,3,88,3};
 int size = sizeof(arr)/4;

 int s = 0;
 int e = size-1;

 mergeSort(arr,s,e);

 for (int i = 0; i < size; i++)
 {
   cout << arr[i]<<" ";
 }
 
 
 
 return 0;
}