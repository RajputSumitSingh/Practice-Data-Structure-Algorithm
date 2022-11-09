#include<iostream>
#include<queue>
#include<vector>
using namespace std;
 
int main()
{
 priority_queue<int>maxHeap;
 vector<int>v;

 int arr[] = {4,5,1,8,6,7};

 for (int i = 0; i < 6; i++)
 {
  maxHeap.push(arr[i]);
 }

 for (int i = 0; i < 6; i++)
 {
  v.push_back(maxHeap.top());
  maxHeap.pop();
 }

 //Printing the sorted array
 for (int i = 0; i < 6; i++)
 {
  cout << v[i]<<", ";
 }

cout << endl;
 for(int i=0; i<6; i++){
  cout << v[i] << ", ";
 }
 
 return 0;
}