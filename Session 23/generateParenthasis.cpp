#include<iostream>
#include<vector>
using namespace std;

void solve(int currOpen,int currClose,int remOpen,int remClose,string output,vector<string>&ans){
  //base case
  if(remOpen == 0 && remClose == 0){
    ans.push_back(output);
    return;
  }

  //for the "(" bracket;
  if(remOpen > 0){

    output.push_back('(');
    solve(currOpen+1,currClose,remOpen-1,remClose,output,ans);
    output.pop_back();

  }

  //for teh ")" barcket;
  if(remClose > 0 && currOpen > currClose){

    output.push_back(')');
    solve(currOpen,currClose+1,remOpen,remClose-1,output,ans);
    output.pop_back();
    
  }
}
 
int main()
{
  //total brackets input
 int n = 3;
 vector<string>ans;
 string output = "";
 int currOpen = 1;
 int currClose = 0;
 int remOpen = n-1;
 int remClose = n;

//  call the function

 solve(currOpen,currClose,remOpen,remClose,output,ans);

 //output show
 cout << "[ ";
 for (int i = 0; i < ans.size(); i++)
 {
   cout <<"[("<< ans[i] << "], ";
 }
 cout << "]";
 

 
 
 return 0;
}