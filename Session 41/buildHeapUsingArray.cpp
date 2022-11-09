#include<iostream>
using namespace std;


void heapify(int arr[],int n, int i){
  int largest = i;
  int left = 2*i;
  int right = 2*i + 1;

  if(largest <= n && arr[largest] < arr[left]){
    largest = left;
  }

  if(largest <= n && arr[largest] < arr[right]){
    largest = right;
  }

  if(largest != i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
  }
}

 
int main()
{

  int n = 5;
  int arr[] = {-1,2,3,55,3,8};

  for (int i = n/2; i >=1; i--)
  {
    heapify(arr,n,i);
  }


  //now printhing
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i]<< " ";
  }
  
  
 
 
 return 0;
}