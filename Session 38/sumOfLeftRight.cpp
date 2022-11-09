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

pair<int,bool> checkTree(Node* root){
  //base case
  if(root == NULL)
    return make_pair(0,true);

  if(root->left == NULL && root->right == NULL)
    return make_pair(root->data , true);

  pair<int,bool> leftAns = checkTree(root->left);
  pair<int,bool> rightAns = checkTree(root->right);

  int sum = leftAns.first+rightAns.first;

  if(leftAns.second == true && rightAns.second == true && (root->data == sum)){
    return make_pair(sum+root->data,true);
  }else{
    return make_pair(sum,false);
  }
}
 
int main()
{
  Node* root = buildTree();

  //findig the tree is sum of balanced or not.
  cout <<"Checking : "<< checkTree(root).second;
 
 
 
 return 0;
}