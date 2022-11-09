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

Node* createTree(){

  int data;
  cout << "Enter the data : ";
  cin >> data;

  //base case
  if(data == -1){
    return NULL;
  }
  Node *newNode = new Node(data);

  newNode->left = createTree();
  newNode->right = createTree();
  
  return newNode;
}

int height(Node* root){
  if(root == NULL){
    return 0;
  }

  int left = height(root->left);
  int right = height(root->right);

  return max(left,right)+1;
}

int diameter(Node *root){

  //base case
  if(root == NULL){
    return 0;
  }

  int leftAns = diameter(root->left);
  int rightAns = diameter(root->right);
  int sum = height(root->left)+height(root->right)+1;
  return max(leftAns,max(rightAns,sum));

}
 
int main()
{

  Node *root = createTree();

  cout << "Diameter of the binary tree is : "<< diameter(root);
 
 
 
 return 0;
}