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

//finding the sum of the target into function
bool solve(Node* root,int target){
  //base case
  if(root == NULL){
    return false;
  }

  if(root->data == target && root->left == NULL && root->right == NULL){
    return true;
  }

  
  
  return solve(root->left, target-root->data) || solve(root->right, target-root->data);
}
 
int main()
{
 Node *root = buildTree();

 int target = 22;

 cout << "path sum : " <<solve(root,target);
 
 
 return 0;
}