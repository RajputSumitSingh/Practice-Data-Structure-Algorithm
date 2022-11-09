#include<iostream>
using namespace std;

//making the NODE
class Node{

  public:
  int data;
  Node *next;

  //constructor
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

//decleration
int sizeOfLinkedList(Node *head);

//Insert into head
void inserAtHead(Node *&head,int data){

  Node *newNode = new Node(data);
  if(head == NULL){

    head = newNode;
  }else{

    newNode -> next = head;
    head = newNode;
  }
}


//Insert into tail
void inserAtTail(Node *&tail,int data){

  Node *newNode = new Node(data);

  tail->next = newNode;
  tail = newNode;
}




//Finding Size of LinkedList
int sizeOfLinkedList(Node *head){
  int count = 0;
  while (head != NULL)
  {
    count++;
    head = head->next;
  }
  return count;
  
}


//INTERSECTION POINT OF TWO LINKED LIST
void intersectionPointOfTwoLL(Node *&head){


  

}




//PRINTING THE ELEMENTS OF SINGLY LINKEDLIST
void traverseNode(Node *head){ 

  while (head != NULL)
  {
    cout << head->data<<" ";
    head = head->next;
  }
  cout << endl;
  
}
 
int main()
{
 
 Node *head = NULL;
 Node *tail = NULL;
 //insert at head
 inserAtHead(head,3);
 tail = head;
 inserAtHead(head,5);
 inserAtHead(head,9);
 inserAtHead(head,1);

 //insert at tail
 inserAtTail(tail,10);
 inserAtTail(tail,20);
 inserAtTail(tail,30);




 
 return 0;
}