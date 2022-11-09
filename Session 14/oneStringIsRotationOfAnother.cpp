#include<iostream>
using namespace std;
 
int main()
{
 string str1 = "ABCD";
 string str2 = "CDAB";

 string temp = str1+str1;

 size_t found = temp.find(str2);
 if(found != string::npos){
   cout << "it is found at : "<<found<<endl;
 }else{
   cout << "not found"<<endl;
 }
 
 
 
 return 0;
}