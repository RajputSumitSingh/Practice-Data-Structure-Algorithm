#include<iostream>
#include<unordered_map>
using namespace std;
 
int main()
{

  unordered_map<char,int>m;
 //insertion types
  m.insert({'s',3});
  m.insert({'a',311});
  m.insert({'b',32});

  m['e'] = 2;

  pair<char,int>r = make_pair('z',201);
  pair<char,int>p = make_pair('z',200);

  m.insert(r);
  m.insert(p);


  // m.count();
 
 cout << "size : "<< m.size() << endl;
 cout << "first value : "<< m['z']<< endl;
 cout << "size : "<< m.empty() << endl;


  cout << " The Iteration of the Hashmap" <<endl;
 for (auto i = m.begin(); i != m.end(); i++)
 {
  cout << i->first << " : " << i->second << endl;

 }
 
cout << "Other types"<<endl;
 for(auto i:m){
   cout << i.first << " : " << i.second << endl;
 }

 //emplacing
 m.emplace('z','k');

 //for finding the element using the iterator
 unordered_map<char,int> :: iterator it;
 it = m.find('z');

 if(it != m.end()){
  cout << "found"<< endl;
  cout << it->first<<endl;
 }else{
  cout <<"not found"<<endl;
 }

 for(auto i:m){
  cout <<"sumit : "<< i.first << " : " << i.second<<endl;
 }
 
 
 return 0;
}