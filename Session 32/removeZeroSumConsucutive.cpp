//LEETCODE : 1171. Remove Zero Sum Consecutive Nodes from Linked List
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

//Main concept of solving the removeZeroSumSublist
Node *solve(Node *&head,bool &anyChange){
  
  if(head == NULL){
    return head;
  }
  Node *temp = head;
  int sum = 0;
  while(temp != NULL){
    sum += temp->data;
    if(sum == 0)
      break;
    temp = temp->next;
  }

  if(sum == 0){
    anyChange = true;
    return temp->next;
  }

  //agli node ko head mankar check karo ki zero aaya ki nahi
  head->next = solve(head->next,anyChange);
  return head;


}



//REMOVE ZEOR SUM SUBLIST
void removeZeroSumSublist(Node *&head){

  while(true){
    bool anyChange = false;
    head = solve(head,anyChange);

    if(head == NULL || anyChange == false)
      break;
  }
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
 inserAtHead(head,-3);
 tail = head;
 inserAtHead(head,3);
 inserAtHead(head,2);
 inserAtHead(head,1);

 //insert at tail
 inserAtTail(tail,4);
//  inserAtTail(tail,20);
//  inserAtTail(tail,30);

 //traversing
 traverseNode(head);

 removeZeroSumSublist(head);
  //traversing
 traverseNode(head);
 
 return 0;
}