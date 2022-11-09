#include<iostream>
#include<map>
#include<vector>
using namespace std;
 
int main()
{
 string s = "geeksforgeeks";
 map<char,int>m;
 for (int i = 0; i < s.size(); i++)
 {

   m[s[i]]++;

 }
 
 
 for (int i = 0; i < 26; i++)
 {
   if(m[i+97] > 0){
      cout << char(i+97)<<" : "<<m[i+97]<<endl;
   }

 }
 




 
 
 return 0;
}