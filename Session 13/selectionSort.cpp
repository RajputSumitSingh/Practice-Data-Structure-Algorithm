#include<iostream>
#include<limits.h>
using namespace std;
 
int main()
{
 int arr[] = {6,4,3,8,2,12,30,2};

 int n = 8;
 int min;
 int min2;
 int flag;

 for (int i = 0; i < n-1; i++)
 {
   min = INT_MAX;
   int j = i+1;
   flag = 0;
   while(j < n)
   {
     if(arr[j] < min){
       min = arr[j];
       min2 = j;
       flag = 1;
     }
     j++;
   }
  //  cout << arr[i]<< " : "<< arr[min2]<<endl;
   if(arr[i] > arr[min2])
    swap(arr[i],arr[min2]);
 }

 for (int i = 0; i < n; i++)
 {
   cout << arr[i]<<" , ";
 }
 
 
 
 return 0;
}