#include<iostream>
using namespace std;

void solve(string s,string output,int index){
  //base case
  if(index == s.size()){
    cout << output << endl;
    return;
  }

  output.push_back(s[index]);
  
  //no - space
  solve(s,output,index+1);

  //with space
  output.push_back(' ');
  if(s[index + 1] != '\0'){
    solve(s,output,index+1);
  }
}
 
int main()
{
 string s = "123";
 string output;
 int index = 0;

 solve(s,output,index);
 
 
 return 0;
}