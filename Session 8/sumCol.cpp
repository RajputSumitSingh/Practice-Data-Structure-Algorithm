#include<iostream>
#include<limits.h>
using namespace std;
 
int main()
{
 int arr[3][3] = {{2,3,8},{1,2,3},{8,9}};
 int sum = 0;
 int maxi = INT_MIN;

 for (int i = 0; i < 3; i++)
 {
   sum = 0;
   for (int j = 0; j < 3; j++)
   {
     sum += arr[j][i];

   }
    cout <<i<<" : "<< sum << endl;
    maxi = max(sum , maxi);
 }

 cout << "The maximum : "<< maxi << endl;
 
 
 
 return 0;
}