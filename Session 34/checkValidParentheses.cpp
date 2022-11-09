#include<iostream>
#include<stack>
using namespace std;

bool match(char open, char close){
  if(open == '[' && close == ']')
    return true;
  if(open == '(' && close == ')')
    return true;
  if(open == '{' && close == '}')
    return true;

  return false;
}
 
int main()
{
  stack<int>st;
  string s = "()[]{}";
  bool flag = 0;

  int len = s.size();
  if(len&1){
    cout << "not valid"<<endl;
    return -1;
  }

  for (int i = 0; i < len; i++)
  {
    int val = s[i];
    if(val == '[' || val == '{' || val == '('){
      st.push(val);
    }else{
      if(!st.empty() || match(val,st.top())){
        flag = 1;
        st.pop();
      }else{
        
        flag == 0;
        break;

      }
    }
  }

  if(flag == 1){

    cout << "valid"<<endl;

  }else{

    cout << "not valid"<<endl;
    
  }
  
 
 
 
 return 0;
}