#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin >> n;
 
 for (int i = 1; i <= n; i++)
 {

   //for left side
    char alpha = 65;
   for (int j = 1; j <= i; j++)
   {
     cout << alpha << " ";
     alpha++;
   }
   alpha--;

   //for right side
   for (int j = i-1; j > 0; j--)
   {
     alpha--;
     cout << alpha << " ";
   }
   
   cout << endl;
   
 }
 
 
 
 return 0;
}