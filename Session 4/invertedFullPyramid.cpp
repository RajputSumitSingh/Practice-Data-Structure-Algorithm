#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin >> n;

 for (int i = 0; i < n; i++)
 {
   //for spacing
   for (int j = 0; j < i; j++)
   {
     cout << " ";
   }

   //for star (*)
   for (int j = 0; j < n-i; j++)
   {
     cout << "* ";
   }
   cout << endl;
   
   
 }
 
 
 
 return 0;
}