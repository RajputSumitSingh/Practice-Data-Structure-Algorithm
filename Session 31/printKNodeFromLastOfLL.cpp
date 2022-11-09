//PRINT K NODE FROM THE END OF LINKEDLIST 

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

//FINDING THE K NODE WITH GAP OF K BETWEEN SLOW AND FAST POINTER.
Node *findNode(Node *&head,int k){

  if(k > sizeOfLinkedList(head)){
    Node *value = new Node(-1);
    return value;
  }
  Node *slow = head;
  Node *temp = head;

  while(k != 1){
    temp = temp->next;
    k--;
  }
  Node *fast = temp;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next;
  }

  return slow;
}


//FINDING THE K NODE FROM ENDING WITH RECURSION.
Node* findNodeRec(Node *head,int &k){
  
  //base case
  if(head == NULL){
    return NULL;
  }

  Node *temp = findNodeRec(head->next,k);
    k--;
  // cout <<"K : "<<k << ", node : "<<head->data << endl;
  if(k < 0){
    return temp;
  }else{
    return head;
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
 inserAtHead(head,3);
 tail = head;
 inserAtHead(head,5);
 inserAtHead(head,9);
 inserAtHead(head,1);

 //insert at tail
 inserAtTail(tail,10);
 inserAtTail(tail,20);
 inserAtTail(tail,30);

 //traverse the data
 traverseNode(head);


//finding with slow and faster pointer with gap of k.
// cout << "The K node from Last Node is : "<< findNode(head,4)->data<<endl;

//finding with recursion
int k = 5;
cout << "The "<<k<<" node from Last Node is : "<< findNodeRec(head,k)->data<<endl;


 
 return 0;
}