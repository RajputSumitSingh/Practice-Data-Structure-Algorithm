#include<iostream>
#include<queue>
using namespace std;

int findKthLargestElementInHeap(int *arr,int n, int k){

  //creating the heap
  priority_queue<int, vector<int>, greater<int>> minHeap;

  //push all the element into the minHeap
  for (int i = 0; i < n; i++)
  {
    minHeap.push(arr[i]);
  }

  while (minHeap.size() > k)
  {
    minHeap.pop();
  }

  return minHeap.top();

}
 
int main()
{
 int arr[] = {20, 15, 18, 8, 10, 5, 17};
 int n = 7;
 int k = 2;

 cout <<"The "<< k <<" largest element is : " <<findKthLargestElementInHeap(arr,n,k)<<endl;
 
 
 return 0;
}