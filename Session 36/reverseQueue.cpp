#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){

  //base case
  if(q.empty()){
    return;
  }

  int temp = q.front();
  q.pop();

  reverseQueue(q);

  q.push(temp);
}
 
int main()
{
 queue<int>q;

 q.push(2);
 q.push(25);
 q.push(6);
 q.push(8);
 q.push(9);


//USING THE STACK
//  stack<int>st;
//  while(!q.empty()){
//   st.push(q.front());
//   q.pop();
//  }

//  while (!st.empty())
//  {
//   q.push(st.top());
//   st.pop();
//  }




 //USING THE RECURSION
 reverseQueue(q);

 while(!q.empty()){
  cout << q.front()<<" ";
  q.pop();
 }
 

 
 
 return 0;
}