// Leetcode = 1079. Letter Tile Possibilities
#include<iostream>
#include<set>
#include<map>
using namespace std;

void solve(string s,set<string>&ans,string &output,map<int,bool>&flag){

  for (int i = 0; i < s.size(); i++)
  {
    if(flag[i] == 0){
      output.push_back(s[i]);
      flag[i] = 1;

       cout <<i<< ": storing " << output << " in results " << endl;
      ans.insert(output);
      //call to left
      solve(s,ans,output,flag);

      //pop back 
      output.pop_back();
      flag[i] = 0;

    }
  }
  
}
 
int main()
{
 string s = "AAB";
 set<string> ans;
 string output = "";
 map<int,bool> flag;

 solve(s,ans,output,flag);

 cout << ans.size();
 
 
 return 0;
}