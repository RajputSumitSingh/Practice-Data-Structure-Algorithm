#include<iostream>
using namespace std;
 
int main()
{
 int arr[] = {2,3,5,68,9};
 int size = sizeof(arr)/4;
 int k = 2;

 for (int i = 0; i < size; i++)
 {
    k = k % size;
   if(i < k){
     cout << arr[size+i-k] << " ";
   }else{
     cout << arr[i-k] << " ";
   }
 }
 
 
 
 return 0;
}