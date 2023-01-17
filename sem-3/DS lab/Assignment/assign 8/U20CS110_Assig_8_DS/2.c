#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    int index;
    struct Node *left;
    struct Node *right;
};
struct Node *newnode(int val, int id)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    node->index = id;
    return node;
}
struct Node *insertBST(struct Node *root, int key, int idx)
{
    if (root == NULL)
    {
        return newnode(key, idx);
    }
    if (key < root->data)
    {
        root->left = insertBST(root->left, key, idx);
    }
    else
    {
        root->right = insertBST(root->right, key, idx);
    }
    return root;
}
int search(struct Node *root, int key)
{
    if (root == NULL || root->data == key)
        return root->index;
    if (root == NULL && root->data != key)
        return -1;
    if (root->data < key)
        return search(root->right, key);
    return search(root->left, key);
}
int main()
{
    struct Node *root;
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        root = insertBST(root, arr[i], i);
    }
    int k;
    printf("Enter an element to search : ");
    scanf("%d", &k);
    int res = search(root, k);
    if (res != -1)
    {
        printf("Element found at %d index.", res);
    }
    else
    {
        printf("Element not found.");
    }

    return 0;
}
