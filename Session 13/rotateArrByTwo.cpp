#include<iostream>
using namespace std;
 
int main()
{
 int arr[] = {2,5,8,2,1,50};
 int n = 6;

 int target = 3;
 while (target != 0)
 {
     int temp = arr[n-1];
   for (int i = n-1; i >=0; i--)
   {
     if(i != 0){

       arr[i] = arr[i-1];

     }else{

       arr[i] = temp;

     }
   }

   target--;
   
 }


 for (int i = 0; i < n; i++)
 {
   cout << arr[i] << ", ";
 }
 
 
 
 
 return 0;
}