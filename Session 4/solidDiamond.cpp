#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin >> n;

 int mid = (n/2);
 for (int i = 0; i < n; i++)
 {
   if (i < mid)
   {
     for (int j = 0; j < mid-i; j++)
     {
       cout << " ";
     }
     for (int j = 0; j < i+1; j++)
     {
       cout << "* ";
     }
     
     
   }
   else
   {
     for (int j = 0; j < i-mid+1; j++)
     {
       cout << " ";
     }
     for (int j = 0; j < n - i; j++)
     {
       cout << "* ";
     }
     
     
     
   }
   cout << endl;
   
   
 }
 
 
 
 return 0;
}