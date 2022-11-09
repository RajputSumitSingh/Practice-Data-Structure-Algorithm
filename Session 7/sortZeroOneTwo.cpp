#include<iostream>
using namespace std;
 
int main()
{
 
 int arr[] = {0,1,1,0,2,2,2,0};
 int size = sizeof(arr)/4;

 int one = 0, two = 0, zero = 0;

 for (int i = 0; i < size; i++)
 {
   if(arr[i] == 0){
     zero++;
   }else if(arr[i] == 1){
     one++;
   }else{
     two++;
   }
 }

 int j=0;
 while (zero--)
 {
   arr[j] = 0;
   j++;
 }
 while (one--)
 {
   arr[j] = 1;
   j++;
 }
 while (two--)
 {
   arr[j] = 2;
   j++;
 }

 for (int i = 0; i < size; i++)
 {
   cout << arr[i]<< " ";
 }
 
 
 
 
 
 
 return 0;
}