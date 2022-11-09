#include<iostream>
using namespace std;
 
int main()
{
  int arr[] = {60,4,30,8,2};

 int n = 5;
 bool swaped = false;

 for (int i = 0; i < n; i++)
 {
   for (int j = 0; j < n-i-1; j++)
   {
     if(arr[j] > arr[j+1]){
       swap(arr[j],arr[j+1]);
       swaped = true;
     }
     if(swaped == false){
       break;
     }
   }
   
 }

 for (int i = 0; i < n; i++)
 {
   cout << arr[i]<<" , ";
 }
 
 
 
 
 return 0;
}