#include<iostream>
using namespace std;
//WE ARE USING MACROS BECAUSE OF PERFORMANCE WE WANT TO GIVE THE VALUE WITHOUT DEFINE ANY SPECIFIC VARIABLES.

#define pi 3.14   // IT IS THE SYNTAX OF IMPLEMENT THE MACROS.
#define SUM(a,b) (a+b)   //2nd syntax.

#define instagram value
#define value 200

#define maxi(a,b) ((a > b) ? a : b)  // tertory operator


int main()
{
  // int pi = 3.14;

  cout << "we want to print pi = "<<pi<<endl;   //1.
  cout << "The sum of two value is : " << SUM(2,3)<<endl;// 3.
  cout << "The number is : " << instagram<<endl;//2.
  cout << "The number is : " << value<<endl;

  cout << "Greater no. between 3 and 5 : "<<maxi(5,3)<<endl;




 
 return 0;
}

/*
TYPES OF MACROS

1. Object-like macros = simple identifier replace by code fragement.
2. Chain macros = it chain like macros
3. Function-like Macro = used for function like macros.
*/