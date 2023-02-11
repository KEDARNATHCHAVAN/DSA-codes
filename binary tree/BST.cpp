#include <iostream>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;

    node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};
node *insert(node *root, int key)
{
    if (root == NULL)
    {
        return new node(key);
    }
    // rec case
    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}
void printinorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printinorder(root->left);
    cout << root->key << " ";
    printinorder(root->right);
}
bool search(node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->key == key)
    {
        return true;
    }
    if (key < root->key)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}
int main()
{
    node *root = NULL;
    int a[] = {2, 3, 4, 5, 6, 7, 75, 4, 32, 3};
    for (int x : a)
    {
        root = insert(root, x);
    }
    printinorder(root);
    search(root,10);
    return 0;
}