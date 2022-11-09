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


//search Node in Binary Search Tree
bool searchBST(Node* root,int data){
  //base case
  if(root == NULL)
    return false;

  if(data == root->data){
    return true;
  }

  if(data > root->data){
    return searchBST(root->right,data);
  }else{
    return searchBST(root->left,data);
  }
}

//finding the predecessor
Node* findPredecessor(Node* root){
  //base case
  if(root->right == NULL){
    return root;
  }
  return findPredecessor(root->right);
}

//DELETION IN BINARY TREE
Node* deleteNode(Node* root,int target){

  //base case
  if(root == NULL)
    return NULL;

  if(target == root->data){
    //0 child
    if(root->left == NULL && root->right == NULL){
      delete root;
      return NULL;
    }

    //1 child
    if(root->left == NULL && root->right != NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    }
    if(root->left != NULL && root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }

    //2 child
    if(root->left != NULL && root->right != NULL){
      int predecessor = findPredecessor(root->left)->data;

      root->data = predecessor;
      root->left = deleteNode(root->left,predecessor);
      return root;
    }

  }else if(target < root->data){
    root->left = deleteNode(root->left,target);
  }else{
    root->right = deleteNode(root->right,target);
  }
  return root;
}


 
int main()
{
  Node* root = createBST();
  levelOrderTraversal(root);

  //search the node in BST
  int data = 2;
  cout << "Node found or Not : " << searchBST(root,data);

  //delete the node
  int target = 12;
  deleteNode(root,target);

  cout << endl<<"After DELETION of Node"<<endl;
  levelOrderTraversal(root);
 
 return 0;
}