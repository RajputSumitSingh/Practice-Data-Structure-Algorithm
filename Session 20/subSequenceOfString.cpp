#include<iostream>
#include<vector>
using namespace std;

void solve(string s,int index,string output,vector<string>&ans){

  //base case
  if(index >= s.size()){
    ans.push_back(output);
    return;
  }

  //exclude
  solve(s,index+1,output,ans);

  //include
  char element = s[index];
  output.push_back(element);
  solve(s,index+1,output,ans);
}
 
int main()
{
 string s = "abc";
 vector<string>ans;
//  vector<string>output;
string output;
 int index = 0;

 solve(s,index,output,ans);

 for (int i = 0; i < ans.size(); i++)
 {
   cout <<"{"<< ans[i]<<"}"<<" ,";
 }
 
 
 
 return 0;
}