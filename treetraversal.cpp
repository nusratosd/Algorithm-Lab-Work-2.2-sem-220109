#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
node(int value)
{
    data=value;
    left=NULL;
    right=NULL;
}

};
void preorder(struct node* root){

if(root==NULL)
{
    return;
}
cout<<root->data<<endl;
preorder(root->left);
preorder(root->right);

}
int main()
{
    struct node* root= new node(1);//
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(2);
    root->right->right=new node(3);
    preorder(root);
    return 0;

}
