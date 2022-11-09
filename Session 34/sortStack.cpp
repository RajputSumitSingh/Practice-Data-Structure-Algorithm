#include<iostream>
#include<stack>
using namespace std;

void sortElement(stack<int>&st, int element){

  //base case
  if(st.empty() || st.top() < element){
    st.push(element);
    return;
  }

  int temp = st.top();
  st.pop();

  sortElement(st,element);

  st.push(element);
}

void sortStack(stack<int>&st){

  //base case
  if(st.empty()){
    return;
  }

  //store element;
  int element = st.top();
  st.pop();
  sortStack(st);

  //call sortElement function
  sortElement(st,element);
}
 
int main()
{
 stack<int>st;

 //insert into stack
 st.push(3);
 st.push(30);
 st.push(1);
 st.push(5);
 st.push(2);
 st.push(25);

 sortStack(st);

 while (!st.empty())
 {
  cout << st.top()<<" ";
  st.pop();
 }
 
 
 
 return 0;
}