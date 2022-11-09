#include<iostream>
using namespace std;
 
int main()
{
 int arr[5] = {1,2,3,5,5};
 int arr2[5];

 for (int i = 0; i < 5; i++)
 {
   if(arr[i] != arr[i+1])
      arr2[i] = arr[i];
 }

  int ans = 0;
 for (int i = 0; i < 5; i++)
 {
   if(arr[i] == arr2[i])
      arr[i] = arr[i] - arr2[i];

    ans += arr[i];
 }
 cout <<"The duplicate is : "<< ans <<endl;
 
 
 
 
 return 0;
}