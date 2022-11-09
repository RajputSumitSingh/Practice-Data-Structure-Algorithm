#include<iostream>
#include<string>
using namespace std;
 
int main()
{
 string s = "sumit singh";
//  s.resize(30);

 //s.clear();//it will erase the content but not the memory block;
//  s = "sks";
//  s.shrink_to_fit();  shrink to fit is the function which will erase all the extra space;
 cout << "size : "<<s.size()<<endl;
 cout << "length : "<<s.length()<<endl;
 cout << "max_size : "<<s.max_size()<<endl;
 cout << "capacity : "<<s.capacity()<<endl;
 cout << "at index : "<<s.at(2)<<endl;
 cout << "front: "<<s.front()<<endl;
 cout << "back: "<<s.back()<<endl;
 

 string last = " Rajput";

 cout << "concatinate : "<< s+last<<endl;

 //append
//  cout << "append : "<< s.append(" king khan")<<endl;
//  cout << "append : "<< s.append(" kkkkkkk",5,10)<<endl;
 cout << "append : "<< s.append(s.begin()+3,s.end())<<endl;

  s.push_back('4');
 cout << "push_back : "<< s <<endl;

 s.assign("sumit");
 cout << "assign : "<< s <<endl;

 string :: iterator it;

 string k = "rrr";
//  k.insert(it+5,s.begin()+5,s.end());
k.insert(3,"sumit singh");
 cout << " insert into k : "<< k << endl;

 k.erase(k.begin()+3,k.end()-5);
 cout << "erasse  : "<<k<<endl;

 //swap
 string a = "sumit";
 string b = "singh";
 cout << "a : "<<a << " | b :"<<b << endl;
 a.swap(b);
 cout << "a : "<<a << " | b :"<<b << endl;

 k.pop_back();
 cout << "pop_back() : "<<k << endl;

 string st = "sumit singh";
 string st2 = "mit1";


 size_t found = st.find(st2);

 if(found != string::npos){
   cout << "found at : "<<found<<endl;
 }else{
   cout << "not found"<<endl;
 }
 
 return 0;
}