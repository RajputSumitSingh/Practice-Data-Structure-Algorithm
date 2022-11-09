#include<iostream>
using namespace std;
 
int main()
{
 int n;
 cout << "Enter the NUMBER : ";
 cin >> n;
 bool flag = 0;

 for (int i = 2; i < n; i++)
 {
   if(n % i == 0){
     flag = 1;
     cout << "NUMBER is not prime  : "<<endl;
     break;
   }

   
 }

 if (flag != 1){
   cout << "This is prime no. "<<endl;
 }
 
 
 
 return 0;
}