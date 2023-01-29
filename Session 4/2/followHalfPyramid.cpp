#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin >> n;

 for (int i = 1; i <= n; i++)
 {
   if(i == 1 || i == n){
     for (int j = 1; j <= i; j++)
     {
       cout << j << " ";
     }
     
   }else{
     for (int j = 1; j <= i; j++)
     {
       if (j == 1 || j == i)
       {
         cout << j <<" ";
       }
       else
       {
         cout << "  ";
       }
       
       
     }
     
   }
   cout << endl;
   
 }
 
 
 
 return 0;
}