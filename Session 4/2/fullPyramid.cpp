#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin>>n;

 for (int i = 1; i <= n; i++)
 {
   //for appliying the space in left side
   for (int j = 1; j <= n-i; j++)
   {
     cout << "  ";
   }

   //for the element left
   int j = i;
   int count = i;
   while (count != 0)
   {
     cout << j << " ";
     j++;
     count--;
   }
   j--;
   

   //for the element right
   count = i-1;
   while (count != 0)
   {
     j--;
     cout << j << " ";
     count--;
   }
   
   cout << endl;
   
 }
 
 
 
 return 0;
}