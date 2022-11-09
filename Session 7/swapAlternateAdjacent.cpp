#include<iostream>
using namespace std;
 
int main()
{
 int arr[] = {23,4,5,7,9,33};
 int size;

 if ((sizeof(arr)/4 )%2 !=0)
 {
   size = sizeof(arr)/4 -1;
 }else{
   size = sizeof(arr)/4;

 }
 
 
 for (int i = 0; i < size; i = i+2)
 {
   swap(arr[i],arr[i+1]);
 }

 for (int i = 0; i < sizeof(arr)/4; i++)
 {
   cout << arr[i] << " ";
 }
 
 
 
 
 return 0;
}