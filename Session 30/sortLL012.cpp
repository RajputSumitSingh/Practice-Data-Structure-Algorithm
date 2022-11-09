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


//SORTING THE LINKED LIST
void sortLL(Node *&head){

  Node *zero = new Node(-1);
  Node *zeroHead = zero;
  Node *one = new Node(-1);
  Node *oneHead = one;
  Node *two = new Node(-1);
  Node *twoHead = two;

  Node* temp = head;

  while(temp != NULL){

    if(temp->data == 0){
      zero->next = temp;
      zero = temp;
      temp = temp->next;
      zero->next = NULL;

    }else if(temp->data == 1){
      one->next = temp;
      one = temp;
      temp = temp->next;
      one->next = NULL;

    }else{
      two->next = temp;
      two = temp;
      temp = temp->next;
      two->next = NULL;

    }
  }

  zero->next = oneHead->next;
  one->next = twoHead->next;

  head = zeroHead->next;


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
 
 Node *head = NULL;
 Node *tail = NULL;
 //insert at head
 inserAtHead(head,0);
 tail = head;
 inserAtHead(head,1);
 inserAtHead(head,2);
 inserAtHead(head,1 );

 //insert at tail
 inserAtTail(tail,0);
 inserAtTail(tail,2);
 inserAtTail(tail,1);
 inserAtTail(tail,2);
 inserAtTail(tail,1);

 //traverse the data
 traverseNode(head);

 //Now sorting the 0 1 2
 sortLL(head);
 traverseNode(head);


 
 return 0;
}