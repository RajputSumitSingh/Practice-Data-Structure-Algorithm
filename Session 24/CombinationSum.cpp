// leetcode : 39. Combination Sum

#include<iostream>
#include<vector>
using namespace std;

/*

void solve(vector<int>&candidates,int target,vector<vector<int>>&output,vector<int>&temp,int index){
  //base case
  if(target == 0){
    output.push_back(temp);
    return;
  }

  if(target < 0 || index >= candidates.size()){
    return;
  }

  //exclude
  solve(candidates,target,output,temp,index+1);

  //including
  temp.push_back(candidates[index]);
  solve(candidates,target-candidates[index],output,temp,index);
  temp.pop_back();


}
*/

//OTHER METHOD WITH FOR LOOP
 void solve(vector<int>&candidates,int target,vector<vector<int>>&output,vector<int>&temp,int index){
   //base case
   if(target == 0){
     output.push_back(temp);
     return;
   }

//if target going to less than zero.
   if(target < 0){
     return;
   }
   
   for (int i = index; i < candidates.size(); i++)
   {
     temp.push_back(candidates[i]);
     solve(candidates,target-candidates[i],output,temp,i);
     temp.pop_back();

   }
   
 }
 
int main()
{
 vector<int> candidates={2,3,6,7};
 int target = 7;
 vector<vector<int>> output;
 vector<int> temp;

 solve(candidates,target,output,temp,0);


  cout << "[ ";
for (int i = 0; i < output.size(); i++)
{
  cout << "[ ";
  for (int j = 0; j < output[i].size(); j++)
  {
    cout << output[i][j]<<", ";
  }
  cout << "]";
  
}
  cout << "]";

 

 
 
 return 0;
}