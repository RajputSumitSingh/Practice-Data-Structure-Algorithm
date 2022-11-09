#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cin >> n;

 for (int i = 1; i <= n; i++)
 {
   //for spacing in left side
   for (int j = 1; j <= n-i; j++)
   {
     cout << " ";
   }

   if (i == 1 || i == n)
   {
     for (int j = 1; j <= i; j++)
     {
       cout << j << " ";
     }
     
   }else
   {
     int j = 1;
     while(j != i+1)
     {
       if(j == 1 || j == i){
         cout << j << " ";
       }else{

         cout << "  ";
       }
        j++;
     }
     
    
     
   }
   cout << endl;
   
   
 }
 
 
 
 return 0;
}