//leetcode question

#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *buildTree(){
  int data;
  cout << "Enter the data : ";
  cin >> data;

  if(data == -1){
    return NULL;
  }

  Node *newNode = new Node(data);

  cout << "Enter the left data of "<< data << endl;
  newNode->left = buildTree();

  cout << "Enter the right data of "<< data << endl;
  newNode->right = buildTree();

  return newNode;
}

//global variable
int count = 0;

//finding the total sum as differe root node
void findingAsRoot(Node *root,int target){
  //base case
  if(root == NULL)
    return;

  if(target == root->data){
    count++;
  }
  
  findingAsRoot(root->left,target-root->data);
  findingAsRoot(root->right,target-root->data);
}

void solve(Node* root,int target){
  //base case
  if(root == NULL)
    return;

  findingAsRoot(root,target);

  solve(root->left,target);
  solve(root->right,target);
}
 
int main()
{
 Node* root = buildTree();

 //printing the total no. of sum
 int target = 8;

 solve(root,target);
 cout << "The count is : "<<count;
 return 0;
}