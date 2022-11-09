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

//REVERSE THE LINKED LIST
void reverseLL(Node *&head){
  Node *prev = NULL;
  Node *curr = head;
  Node *nexx = head->next;

  while(nexx != NULL){
    nexx = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nexx;
  }
  head = prev;
}

void reverseRecur(Node *&head,Node *curr){
  //bassse case
  if(head == NULL){
    head = curr;
    return;
  }

  Node *nexx = head->next;
  head->next = curr;
  curr = head;
  head = nexx;
  reverseRecur(head,curr);

}

//FINDING THE MIDDLE OF THE LINKED LIST

// Floyd’s slow and fast pointers approach work?
Node* middleOfLL(Node *head){
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
    
  }
  return slow;
}

//Reverse in K node
Node* reverseInK(Node *&head,int k){
  Node *prev = NULL;
  Node *curr = head;
  Node *nexx = NULL;
  int count = 0;

  //base case
  if(head == NULL){
    return NULL;
  }



  while(curr != NULL && count < k){
    nexx = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nexx;
    count++;
  }

  // cout << temp->data << endl;

  if(nexx != NULL){

    Node *temp = reverseInK(curr,k);
    head->next = temp;
  }

  return prev;


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

 //insert at position
 insertAtPos(head,100,8);
 //traverse the data
 traverseNode(head);

 //REVERSE THE LINKED LIST
 cout << endl << "Reversing the linked list"<<endl;
//  reverseLL(head);
 reverseRecur(head,NULL);
 traverseNode(head);




// Floyd’s slow and fast pointers approach work?
 //finding the middle
 cout << "middle is : "<< middleOfLL(head)->data<<endl;


 //REVERSE IN K NO. OF NODE
 cout << endl<<"After k node reverse"<<endl;
 reverseInK(head,3);
 traverseNode(head);

 
 return 0;
}