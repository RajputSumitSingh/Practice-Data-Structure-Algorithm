#include<iostream>
using namespace std;
 
int main()
{
 int arr[]{23,56,89,98,10,2,3,88};

 int size = sizeof(arr)/4;
 int size2 = size/2;

   int j = size-1;
 for (int i = 0; i < size2; i++)
 {
   swap(arr[i],arr[j]);
   j--;
 }

 for (int i = 0; i < size; i++)
 {
   cout << arr[i] << " ";
 }
 
 
 
 
 return 0;
}