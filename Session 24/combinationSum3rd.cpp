//Leetcode : 216. Combination Sum III

#include<iostream>
#include<vector>
using namespace std;

void solve(int target,int k,vector<vector<int>>&ans,vector<int>&output,int index){
  //base case
  if(target == 0 && k == 0){
    ans.push_back(output);
    return;
  }

  if(target < 0){
    return;
  }

  for (int i = index; i < 10; i++)
  {
   
      output.push_back(i);
      solve(target - i,k-1,ans,output,i + 1);
      output.pop_back();
    

  }
  
}
 
int main()
{
 int n = 7;
 int k = 3;

 vector<vector<int>> ans;
 vector<int>output;
 int index = 1;

 solve(n,k,ans,output,index);

//OUTPUT OF THE GIVEN CODE.
 
  cout << "[ ";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << ", ";
    }
    cout << "]";
  }
  cout << "]";
 
 
 return 0;
}