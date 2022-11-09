#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
 int n;
 cout << "Enter to check is prime : ";
 cin >> n;
 bool flag = 0;

 for (int i = 2; i < sqrt(n); i++)
 {
   if(n % i == 0){
     flag = 1;
     break;
   }
 }
 if(flag){
   cout << "Not prime"<<endl;
 }else{
   cout << "prime"<<endl;
 }
 
 
 
 return 0;
}