#include<iostream>
#include<vector>
using namespace std;

void solve(string s,string output,vector<string>&ans,int index){

  //base case
  if(index == s.size()){
    ans.push_back(output);
    return;
  }

  //now we use for loop
  for (int i = index; i < s.size(); i++)
  {
    swap(s[index],s[i]);
    output.push_back(s[i]);
    solve(s,output,ans,index+1);

    //backtracking
    swap(s[index],s[i]);
    
  }
  
}
 
int main()
{
 string s = "abc";
 string output = "";
 vector<string>ans;
 int index = 0;

 solve(s,output,ans,index);

 for (int i = 0; i < ans.size(); i++)
 {
   cout << "["<<ans[i]<<"], ";
 }
 
 
 
 return 0;
}