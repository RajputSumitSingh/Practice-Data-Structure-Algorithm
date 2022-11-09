#include<iostream>
#include<queue>

using namespace std;

class Heap{
  public:
  //INSTANCE VARIABLES
    int data;
    int arr[250];
    int size;
  //CONSTRUCTOR
    Heap(){
      size = 0;
    }
  //METHODS
    void insertIntoHeap(int data){
      size += 1;
      int index = size;
      arr[index] = data;

      while(index > 1){
        int parentIndex = index/2;
        if(arr[parentIndex] < arr[index]){

          swap(arr[parentIndex],arr[index]);
          index = parentIndex;

        }else{
          break;
        }
        
      }
    }

    //printing the heap
    void print(){
      cout <<endl;
      for (int i = 1; i <= size; i++)
      {
        cout << arr[i] << " ";
      }
    }


    //deletion of the node
    void deleteHeap(){
      // step1 : check size
      if(size == 0){
        cout <<"There is nothing to delete"<<endl;
        return;
      }

      int index = 1;

      //step2 : swap the first node and last node
      swap(arr[1],arr[size]);
      size--;

      //step3 : heapify the hole tree
      while(index <= size){
        
        int largest = index;
        int left = 2*index;
        int right = 2*index +1;

        if(largest <= size && arr[largest] < arr[left]){
          largest = left;
        }

        if(largest <= size && arr[largest] < arr[right]){
          largest = right;
        }
        // cout << index <<" ";
        //This line is use for the finding the largest value.


        if(largest != index){
          swap(arr[largest],arr[index]);
          index = largest;
        }else{
          break;
        }
      }
    }
};

 
int main()
{
  Heap maxHeap;

  maxHeap.insertIntoHeap(50);
  maxHeap.insertIntoHeap(40);
  maxHeap.insertIntoHeap(100);
  maxHeap.insertIntoHeap(30);
  maxHeap.insertIntoHeap(20);
  maxHeap.insertIntoHeap(21);
  maxHeap.insertIntoHeap(30);
  maxHeap.insertIntoHeap(10);
  maxHeap.insertIntoHeap(15);
  maxHeap.insertIntoHeap(16);

  //PRINTING
  maxHeap.print();

  //1. DELETE
  maxHeap.deleteHeap();
  maxHeap.print();
  
  //2. DELETE
  maxHeap.deleteHeap();
  maxHeap.print();

  //3.DELETE
  maxHeap.deleteHeap();
  maxHeap.print();

  //4.DELETE
  maxHeap.deleteHeap();
  maxHeap.print();
  
  //5.DELETE
  maxHeap.deleteHeap();
  maxHeap.print();
  //6.DELETE
  maxHeap.deleteHeap();
  maxHeap.print();
  //7.DELETE
  maxHeap.deleteHeap();
  maxHeap.print();


 
 
 
 return 0;
}