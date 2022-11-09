#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> solve(int *arr,int index,int target,vector<vector<int>>&output,vector<int>&ans1,int ans = 0){
  //base case
  if(target == 0){
     output.push_back(ans1);
    return output;
  }

  if(target < 0){

    return output;
  }
  

for (int i = index; i < 2; i++)
{
  ans1.push_back(arr[i]);
  solve(arr,i,target-arr[i],output,ans1,ans);
  ans1.pop_back();
}


  return output;
}
 
int main()
{
 
 int arr[] = {1,2};
 int target = 4;
 int index = 0;
 vector<vector<int>> output;
 vector<int>ans1;

 solve(arr,index,target,output,ans1);

 for (int i = 0; i < output.size(); i++)
 {
   cout <<"[";
   for (int j = 0; j < output[i].size(); j++)
   {
     cout << output[i][j]<<", ";
   }
   cout << "]";
   
 }
 
 
 return 0;
}