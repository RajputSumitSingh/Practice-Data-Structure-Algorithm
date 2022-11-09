//GFG : Alphanumeric Abbreviations of a String
//already comes in Google interview.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string s,vector<string>&ans,string output,int index){
  //base case
  if(s.size() == index){
    ans.push_back(output);
    return;
  }



  int count = 1;

if(!output.empty()){
  if(isdigit(output.back())){

            // get the digit and increase the count
            count += (int)(output.back() - '0');
 
            // remove the adjacent digit
            output.pop_back();
  // cout << output[index] << endl;
  }
}

    // change count to a character
    char to_print = (char)(count + '0');
 
    // add the character to result
    output.push_back(to_print);

    cout <<"output : "<< output<<endl;

  //left call
  solve(s,ans,output,index+1);
  output.pop_back();

  output.push_back(s[index]);
  //right call
  solve(s,ans,output,index+1);
  output.pop_back();


}
 
int main()
{

  string s = "ABC";
  string output = "";
  vector<string>ans;
  int index = 0;
  int num = 1;

  solve(s,ans,output,index);

  for (int i = 0; i < s.size(); i++)
  {
    cout << "["<<ans[i]<<"],";
  }
  
 
 
 
 return 0;
}