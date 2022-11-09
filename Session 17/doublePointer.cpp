#include<iostream>
using namespace std;
 
int main()
{
 
 int n = 5;
 int *p = 0;

 p = &n;
 int **q = 0;
 q = &p;

 cout << "n : "<<n<<endl;
 cout << "&n : "<<&n<<endl;
 cout << "p : "<<p<<endl;
 cout << "&p : "<<&p<<endl;
 cout << "&q : "<<q<<endl;
 cout << "*q : "<<*q<<endl;   //pointer to pointer
 cout << "**q : "<<**q<<endl; //pointer to int



 int arr[4] = {22,3,4,44};
//  int *ptr = arr++; error in this line
 int *ptr = arr + 1;

 cout << *ptr << endl;
 
 return 0;
}