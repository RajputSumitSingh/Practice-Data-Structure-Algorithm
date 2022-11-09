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

Node* buildTree(){

  //base case
  int data;
  cout << "Enter the data : ";
  cin >> data;
  if(data == -1)
    return NULL;

  Node* newNode = new Node(data);

  cout <<"Enter the data in left of "<<data <<" : "<<endl;
  newNode->left = buildTree();

  cout <<"Enter the data in right of "<<data <<" : "<<endl;
  newNode->right = buildTree();

  return newNode;
}

//Inorder traversal
void inorder(Node* root){
  //base case
  if(root == NULL)
    return;
  
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

//HEIGHT OF THE BINARY TREE
int height(Node* root){
  //base case
  if(root == NULL)
    return 0;

  int leftAns = height(root->left);
  int rightAns = height(root->right);

  return max(leftAns,rightAns)+1;
  
}
 
int main()
{
 Node* root = buildTree();

 inorder(root);

 //height of binary tree
 cout <<"\n height of binary tree : "<<height(root);
 
 
 return 0;
}