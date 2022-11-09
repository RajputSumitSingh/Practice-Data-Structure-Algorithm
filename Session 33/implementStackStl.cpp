#include<iostream>
#include<stack>
using namespace std;
 

 
 void findMiddle(stack<int>st,int &size){

  //base case
  if(st.empty()){
    return;
  }

  int temp = st.top();
  st.pop();
  findMiddle(st,size);
  size = size-1;
  if(size == 0){
    cout << "The middle element is : "<< temp<<endl;
  }
  
  
 }


int main()
{
 stack<int>st;
 st.push(1);
 st.push(12);
 st.push(13);
 st.push(14);
 st.push(11);
//  st.push(14);


 int size = (st.size()/2)+1;
 findMiddle(st,size);




  while(!st.empty()){
    cout << st.top()<<" ";
    st.pop();
  }
 cout << endl;
 
 return 0;
}