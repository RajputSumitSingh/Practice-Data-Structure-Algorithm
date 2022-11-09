#include<iostream>
using namespace std;
 
int main()
{
 string *arr = new string[200];

  string s = " ";
  int i=0;
 while (s != "stop")
 {

   cin >> s;
   arr[i] = s;
   i++;
 }
 for (int i = 0; i < 5; i++)
 {
   cout << arr[i] <<endl;
 }
 
 
 
 
 return 0;
}