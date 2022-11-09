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


//Insert into random position
void insertAtPos(Node *&head,int data,int pos){

  if(pos-1 > sizeOfLinkedList(head)){
    cout << "You Entered More Than Size Of Linked List"<<endl;
  }else{
  
    if(pos == 1){
      inserAtHead(head,data);
    }else{
      Node *temp = head;
      Node *newNode = new Node(data);
      while (pos-2 != 0)
      {
        temp = temp->next;
        pos--;
      }
        newNode->next = temp->next;
        temp ->next = newNode;
    }
  }
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

//Delete from head
void deleteFromHead(Node *&head){

  if(head == NULL){
    cout << "Nothing to DELETE"<<endl;
    // return;
  }
  else if(head->next == NULL)
  {
    Node *temp2 = head;
    delete temp2;
    head = NULL;

  }else{

    Node *temp;
    temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    cout <<"size : "<< sizeOfLinkedList(head)<<endl;
  }
  
}

//Delete from tail
void deleteFromTail(Node *head,Node *tail){

  if(head == NULL){
    cout << "Nothing to DELETE"<<endl;
    // return;
  }
  else if(head->next == NULL)
  {
    Node *temp2 = head;
    delete temp2;
    head = NULL;

  }else{

    while (head->next->next != NULL)
    {
      head = head->next;
    }
    

    Node *temp;
    temp = head->next;
    tail = head;
    tail->next= NULL;
    delete temp;
  }
  
}

//Delete from random


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

 //insert at position
 insertAtPos(head,100,8);
 //traverse the data
 traverseNode(head);

 deleteFromHead(head);
 deleteFromHead(head);
 deleteFromHead(head);
 deleteFromHead(head);
 deleteFromHead(head);
 deleteFromHead(head);
//  deleteFromHead(head);
//  deleteFromHead(head);
 deleteFromTail(head,tail);

 traverseNode(head);

 
 return 0;
}