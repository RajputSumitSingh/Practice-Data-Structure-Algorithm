#include<iostream>
#include<limits.h>
using namespace std;
 
int main()
{
 int arr[] = {-2,-3,4,-1,-2,1,5,-3};
 int size = sizeof(arr)/4;

 int ans = INT_MIN;
 int sum = 0;


 for (int i = 0; i < sizeof(arr)/4; i++)
 {
   sum +=arr[i];
   ans = max(sum,ans);
   if(sum < 0)
    sum = 0;
 }

 cout << "The maximum subarry of sum : "<<ans<<endl;
 
 


/*
//brute force
 for (int i = 0; i < size; i++)
 {
   sum = 0;
   for (int j = i; j < size; j++)
   {
     sum = sum + arr[j];
     ans = max(sum,ans);
     cout << ans << endl;

   }
   
 }

 cout << "The ans is : "<<ans;
 */
 
 return 0;
}