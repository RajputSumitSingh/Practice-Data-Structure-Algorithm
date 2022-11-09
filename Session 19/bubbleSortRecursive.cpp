#include<iostream>
using namespace std;

void print(int *arr,int size){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i]<<", ";
  }
  
}

void solve(int *arr,int size){
  //base case
  if(size == 0 || size == 1){
    return;
  }

  for (int i = 0; i < size-1; i++)
  {
    if(arr[i] > arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }

  solve(arr,size -1);
  

}
 
int main()
{
 int arr[] = {2,3,99,1,93,22,10};
 int size = sizeof(arr)/4;

 cout << "before"<<endl;
 print(arr,size);

 solve(arr,size);
 
 cout <<endl<< "after"<<endl;
 print(arr,size);
 
 return 0;
}