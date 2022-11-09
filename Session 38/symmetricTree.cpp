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

//checking the tree is symmetric or not
bool symmetricChek(Node* root){

  if(root->left == NULL && root->right == NULL)
    return true;
  if(root->left == NULL && root->right != NULL)
    return false;
  if(root->left != NULL && root->right == NULL)
    return false;
  if(root->left->data != root->right->data){
    return false;
  }

  
  return symmetricChek(root->left) &&  symmetricChek(root->right);
}


 
int main()
{
  Node *root = buildTree();

  cout << "Is symmetric or not : "<< symmetricChek(root);
 
 
 return 0;
}