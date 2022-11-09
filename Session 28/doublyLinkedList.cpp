#include<iostream>
using namespace std;

//making the NODE
class Node{

  public:
  int data;
  Node *next;
  Node *prev;

  //constructor
  Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
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
    head->prev = newNode;
    head = newNode;

  }
}


//Insert into tail
void inserAtTail(Node *&tail,int data){

  Node *newNode = new Node(data);

  tail->next = newNode;
  newNode->prev = tail;
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
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
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
  Node *head=NULL;
  Node *tail=NULL;

  inserAtHead(head,22);
  inserAtHead(head,24);
  inserAtHead(head,2);
  inserAtHead(head,12);

  insertAtPos(head,1111,4);

  traverseNode(head);

  cout << "random"<<endl;

  cout << head ->next->next->data<<endl;

 return 0;
}