#include<iostream>
using namespace std;

int fun(int *p){
  p = p+1;
  return *p;
}

int dummy(int *arr){
  cout <<"dummy : "<< sizeof(arr)<<endl;
  cout << "size ; "<<sizeof(arr)/4<<endl;
  return 0;
}
 
int main()
{
 int n = 5;
 int *pt = 0; //we have to declare only this
 int *p = &n;
 cout << n << endl;

 cout<<"p : " << p << endl;

//  cout << sizeof(p)<<endl;

 cout << fun(p) << endl;
//  cout << p <<endl;


int arr[] = {11,2,3};

cout<< "index 1 : " << *(arr)<<endl;
cout<< "index 2 : " << *(arr+1)<<endl;
cout<< "index 3 : " << *(arr+2)<<endl;

//different way of printing
cout<< "index 3 : " << 0[arr]<<endl;
cout<< "index 3 : " << 1[arr]<<endl;

dummy(arr);

cout<< " arr : " << arr << endl;
cout<< " &arr : " << &arr << endl; // self referencing operator
cout << *arr << endl;


 char ch[5] = "abcd";
 char *ctr = ch;

 cout << ctr<<endl;

 char charc = 'B';
 char *cctr = &charc;
 cout << cctr << endl;

 if(cout << "sumit"){
   cout << "correct"<<endl;
 }else{
   cout << "incorrect"<<endl;
 }
 

 void *ptr = 0;// it will store the any kind of address.

 int kk = 5;
 double k2 = 8;

 ptr = &k2;

 cout << "sumit : "<<sizeof(k2)<<endl;
 
 return 0;
}