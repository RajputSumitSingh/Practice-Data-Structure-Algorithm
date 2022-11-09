#include<iostream>
using namespace std;

class Demo{

  public:
  int first;
  int second;

  static int total;//used for property of the class


  void operator+ (Demo& temp){
    cout << "inside operator overloading +"<<endl;
  }

  //for the binary operator
  Demo operator-(Demo& temp){ //this keyword showing first operator and passed parameter showing second operator
    Demo result;
    result.first = this->first + temp.first;
    result.second = this->second + temp.second;
    cout << this->first<<endl;
    cout << temp.first<<endl;
    cout << "Inside operator overloading -"<<endl;
    return result;
  }

  //unaryoperator
  void operator++ (){
    cout << "inside unary operator"<<endl;
  }


};
//defination is must in static keyword
int Demo :: total;

void operator<<(ostream& os,Demo& temp){
  cout << "INSIDE THE COUT << OVERLOADING"<<endl;
  cout << "first value : "<<temp.first<<endl;
  cout << "second value : "<<temp.second<<endl;
}
 
int main()
{
 Demo obj;
 obj.first = 5;
 obj.second = 6;
 Demo obj2;
 obj2.first = 55;
 obj2.second = 65;
//  obj+obj2;
 Demo c = obj-obj2;
 cout << c.first<<endl;
 ++obj;

 //operator overloading of <<
 cout << obj2;
 cout <<"total : "<< c.total<<endl;
 cout <<"total : "<< Demo :: total<<endl;
 
 
 return 0;
}