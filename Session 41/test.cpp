#include<iostream>
using namespace std;

class Heap{
  public:
    int data;
    int size;
    int arr[250];

    //constructor
    Heap(){
      size = 0;
    }

    //NOW WE ARE INSERTING THE VALUE ONE BY ONE
    void insertIntoHeap(int data){
      size += 1;
      int index = size;
      arr[index] = data;

      while(index > 1){
        int parentIndex = index / 2;
        
      }


    }

}
 
  int main()
{
 
 
 
 return 0;
}