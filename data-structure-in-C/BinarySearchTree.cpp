#include<iostream>

using namespace std;

struct BstNode{
  int data;
  BstNode* left;//in C++, can ignore struct
  BstNode* right;
};


BstNode* GetNewNode(int data)
{
  BstNode* newNode = new BstNode();
  newNode->data = (long)data;//(*newNode).data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}
//nodes will be created in heap using malloc function in C or new in C++
//all objects created in dynamically memory cannot have a name/identifier, it has
//to be accessed through a pointer which stores the address of the object.

// struct BstNode* root;//to store add of root node
//This function can only store an array or list way...lead to the worst unbalanced tree.
BstNode* InsertAtRoot(BstNode* root,int data)
{
  //call the GetNewNode to create a new node in heap
  BstNode* temp = GetNewNode(data);
  if(root == NULL){
    root = temp;
    return root;
  }
  if(root->data <= temp->data){
    //insert root and add original root to its left
    temp->left = root;

  }else{
    //insert new root and add orig root to its right
    temp->right = root;
  }
  root = temp;
  return root;
}
//function to insert in BST, returns address of root node
BstNode* Insert(BstNode* root,int data)
{
  if(root == NULL){//if empty tree
    root = GetNewNode(data);
    // return root;
  }
  else if(data <= root->data){
    //add it to the left subtree
    root->left = Insert(root->left,data);
  }else{
    //add it to the right subtree
    root->right = Insert(root->right,data);
  }
  return root;
}

//
// BstNode* GetNewNode(int data)
// {
//   BstNode* newNode = new BstNode();
//   newNode->data = data;//(*newNode).data = data;
//   newNode->left = NULL;
//   newNode->right = NULL;
//   return newNode;
// }

bool Search(BstNode* root, int data){
  if(root == NULL){
    // printf("It's an empty tree. Please create a tree first.");
    return false;
  }else if(root->data == data){
    return true;
  }else if(data <= root->data){
    return Search(root->left,data);
    // printf("->%d",root->data);
  }else{
    return Search(root->right,data);
    // printf("->%d",root->data);
  }

}

int main(int argc, char const *argv[]) {
  BstNode* root = NULL;//assume an empty tree
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root,20);
  root = Insert(root,25);
  root = Insert(root,8);
  root = Insert(root,12);
  int number;
  cout<<"Enter the number to be searched\n";
  cin>>number;
  if(Search(root,number) == true) cout<<"found\n";
  else cout<<"not found\n.";
  return 0;
}
