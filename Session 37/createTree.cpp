#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node *right;

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


//Preorder traversal
void preOrderTraversal(Node *root){

  //base case
  if(root == NULL){
    return;
  }

  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

//Postorder traversal
void postOrderTraversal(Node *root){

  //base case
  if(root == NULL){
    return;
  }

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
}

//Inorderorder traversal
void inOrderTraversal(Node *root){

  //base case
  if(root == NULL){
    return;
  }

  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
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

//height of the tree
int heightOfTree(Node *root){

  if(root == NULL){
    return 0;
  }
  int leftAns = heightOfTree(root->left);
  int rightAns = heightOfTree(root->right);

  return max(leftAns, rightAns)+1;
}

 
int main()
{

  Node *root;

  root = buildTree();
  
  cout << "Pre order traversal"<<endl;
  preOrderTraversal(root);

  cout <<endl<< "Inorder  traversal"<<endl;
  inOrderTraversal(root);

  cout <<endl<< "Post order traversal"<<endl;
  postOrderTraversal(root);

  cout <<endl<< "Post order traversal"<<endl;
  levelOrderTraversal(root);
 

 cout << endl << "The height of tree is : "<< heightOfTree(root);
 
 
 return 0;
}