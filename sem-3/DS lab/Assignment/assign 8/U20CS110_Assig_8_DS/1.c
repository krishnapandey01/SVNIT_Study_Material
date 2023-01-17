#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* left;
struct Node* right;
};
struct Node* newnode(int val)
{
struct Node * node = (struct Node*)malloc(sizeof(struct Node));
node->data = val;
node->left = NULL;
node->right = NULL;
return node;
}
void printPreOrder(struct Node* root)
{
if(root == NULL){
return;
}
printf("%d ",root->data);
printPreOrder(root->left);
printPreOrder(root->right);
}
void printPostOrder(struct Node* root)
{
if(root == NULL){
return;
}
printPostOrder(root->left);
printPostOrder(root->right);
printf("%d ",root->data);
}
void printInOrder(struct Node* root)
{
if(root == NULL){
return;
}
printInOrder(root->left);
printf("%d ",root->data);
printInOrder(root->right);
}
int main()
{
struct Node * root = newnode(5);
root->left = newnode(2);
root->right = newnode(7);
root->left->left = newnode(3);
root->left->right = newnode(1);
root->right->left = newnode(6);
/* 5
/ \
2 7
/ \ /
3 1 6
*/
printPreOrder(root);
printf("\n");
printPostOrder(root);
printf("\n");
printInOrder(root);
printf("\n");
return 0;
}