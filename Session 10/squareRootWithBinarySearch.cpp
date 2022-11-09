#include<iostream>
using namespace std;
 
int main()
{
 int n = 36;
 int s=2;
 int e = n;
 int mid = s+(e-s)/2;

 while (s <= e)
 {
   int root = mid*mid;
   if(root == n){
     cout << "Your root is : "<< mid<<endl;
   }
   if(root > n){
     e = mid-1;
   }else{
     s = mid+1;
   }
   mid = s+(e-s)/2;
 }
 
 
 
 return 0;
}