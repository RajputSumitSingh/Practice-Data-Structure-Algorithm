#include<iostream>
#include<queue>
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

Node* buildTree(Node* root,int data){

  //base case
  if(root == NULL){
    Node* newNode = new Node(data);
    return newNode;
  }

  if(data > root->data){
    root->right = buildTree(root->right,data);
  }else{
    root->left = buildTree(root->left,data);
  }
  return root;
}

//now putting the data for binary search tree
Node* createBST(){
  Node* root = NULL;
  int data;
  cout << "Enter the data : ";
  cin >> data;

  while(data != -1){
    root = buildTree(root,data);
    
    cin >> data;
  }
  return root;
}


//Level order traversal
void levelOrderTraversal(Node *root){

  queue<Node*>q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node* front = q.front();
    q.pop();
    if(front == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }else{
      cout << front->data<<" ";
      if(front->left != NULL)
        q.push(front->left);
      if(front->right != NULL)
        q.push(front->right);
    }
  }
}

//postorder traversal in the binary search tree
void postorderTraversal(Node* root){

  //base case 
  if(root == NULL){
    return;
  }

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data << ", ";
}

//preorder traversal in the binary search tree

void preorderTraversal(Node* root){

  //base case
  if(root == NULL){
    return;
  }

  cout << root->data << ", ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}
 
int main()
{
  Node* root = createBST();
  levelOrderTraversal(root);

  cout << endl;
  postorderTraversal(root);

  cout << endl;
  preorderTraversal(root);
 
 return 0;
}