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


//check the given tree is balanced or not.
pair<int,bool> isBalanced(Node *root){
  //base case
  if(root == NULL){
    return make_pair(0,true);
  }

  int leftAns = isBalanced(root->left).first;
  int rightAns = isBalanced(root->right).first;

  bool diff = abs(leftAns - rightAns) <= 1;
  // bool leftBool =

  if(diff){
    return make_pair(max(leftAns,rightAns)+1,true);
  }else{
    return make_pair(max(leftAns,rightAns)+1,false);;
  }
}
 
int main()
{

  Node *root = buildTree();

  cout << isBalanced(root).second;

 
 
 
 return 0;
}