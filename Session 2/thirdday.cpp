#include<iostream>
using namespace std;
 
int main()
{
 int ch;
 cin >> ch;

for ( ; ;)
{
  // cout << ch <<endl;
  if(ch == 0)
    break;
  else
    cout << ch-- <<endl;
}



 
 
 return 0;
}