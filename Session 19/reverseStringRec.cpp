#include<iostream>
using namespace std;

void reverseString(string &s,int i,int j){
  //base case
  if(i>j){
    return;
  }
  cout << s[i]<<endl;
  swap(s[i],s[j]);
  i++;
  j--;
  reverseString(s,i,j);

}
 
int main()
{
 string s = "babbar";
 reverseString(s,0,s.size()-1);
 cout << s;
//  printf("The string is : %s",s);
 
 
 return 0;
}