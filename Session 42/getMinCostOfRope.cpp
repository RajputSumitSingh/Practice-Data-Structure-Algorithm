#include<iostream>
#include<queue>
using namespace std;


int getMinCostOfRope(int *arr,int n){

  //create the min Heap using STL
  priority_queue<int, vector<int>, greater<int>> minHeap;

  //insert all the element of the array into the heap
  for (int i = 0; i < n; i++)
  {
    minHeap.push(arr[i]);
  }

  //now check first and second element and summ then put into the min heap

  int cost = 0;

  while (minHeap.size() > 1)
  {
    int sum = 0;
    int first = minHeap.top();
    minHeap.pop();

    int second = minHeap.top();
    minHeap.pop();

    sum = first + second;

    minHeap.push(sum);

    cost += sum;
  }

  return cost;
  
  
}
 
int main()
{
  int arr[] = {4,3,2,6};
  cout << "The cost of ropes Join : "<< getMinCostOfRope(arr,4);
 
 
 
 return 0;
}