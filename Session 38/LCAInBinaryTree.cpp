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

//finding the lowest common ancester
Node* findLCA(Node* root,int p,int q){
  //base case
  if(root == NULL)
    return NULL;

  if(root->data == p || root->data == q){
    return root;
  }else{
    Node* leftAns = findLCA(root->left,p,q);
    Node* rightAns = findLCA(root->right,p,q);

    if(leftAns != NULL && rightAns != NULL){
      return root;
    }
    if(leftAns == NULL)
      return rightAns;
    if(rightAns == NULL)
      return leftAns;
  }

  return NULL;
}


 
int main()
{

  Node*root = buildTree();
  int p = 5;
  int q = 1;


  //finding the lowest common Ancester btwen two nodes.
  cout << "LCA is : "<< findLCA(root,p,q)->data;
 
 
 
 return 0;
}