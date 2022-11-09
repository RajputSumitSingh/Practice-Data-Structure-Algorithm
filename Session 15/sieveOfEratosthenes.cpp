#include<iostream>
#include<vector>
using namespace std;
 
//count total no. of prime no.
 //finding all the numbers between giveen no. from 2 using optimization approach Sieve Of Eraththosthenes.
int main()
{
 int n = 30;

 vector<bool>prime(n+1,true);
 prime[0] = prime[1] = false;

 for (int i = 2; i*i <= n; i++)
 {
   if(prime[i] == true){
     for (int j = i*i; j <= n; j += i)
     {
       prime[j] = false;
     }
     
   }
 }

 //printing the total no. of prime no.
 for (int i = 0; i <= n; i++)
 {
   if(prime[i])
    cout << i << ", ";
 }
 
 

 
 
 return 0;
}