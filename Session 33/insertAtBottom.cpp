#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int>&st,int element){

  //base case
  if(st.empty()){
    st.push(element);
    return;
  }
  //step : 1
  int temp = st.top();
  st.pop();

  //step : 2
  insertAtBottom(st,element);


  //step : 3
  st.push(temp);
}
 
int main()
{
 stack<int>st;
 st.push(1);
 st.push(12);
 st.push(13);
 st.push(11);
 st.push(81);
 st.push(19);


 int element = 44;
 insertAtBottom(st,element);





   while(!st.empty()){
    cout << st.top()<<" ";
    st.pop();
  }
 
 
 return 0;
}