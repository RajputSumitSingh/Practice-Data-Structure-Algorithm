#include<iostream>
#include<vector>
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


//finding the position
int position(vector<int>in,int element,int s,int e){
  for (int i = s; i <= e; i++)
  {
    if(in[i] == element){
      return i;
    }
  }
  return -1;
}

//making the postorder from the inorder and postorder
Node* buildFromInorderPostorder(vector<int>in,vector<int>pre,int &preOrderIndex,int inStart,int inEnd){
  //base case
  if(preOrderIndex > pre.size() || inStart > inEnd){
    return NULL;
  }

  int element = pre[preOrderIndex++];
  Node* root = new Node(element);

  int pos = position(in,element,inStart,inEnd);

  root->left = buildFromInorderPostorder(in,pre,preOrderIndex,inStart,pos-1);
  root->right = buildFromInorderPostorder(in,pre,preOrderIndex,pos+1,inEnd);

  return root;

}

//postorder traversal
void postorder(Node* root){
  //base case
  if(root == NULL)
    return;
  
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

 
int main()
{
 vector<int>inorder = {6,7,11,5,12,2,8};
 vector<int>preorder = {5,7,6,11,8,12,2};
 int index = 0;

 Node* root = buildFromInorderPostorder(inorder,preorder,index,0,inorder.size()-1);

 //postorder
 postorder(root);
 
 
 return 0;
}