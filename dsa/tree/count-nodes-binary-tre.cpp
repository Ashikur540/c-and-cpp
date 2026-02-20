#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder_print(Node *root)
{
    //  root -> left -> right
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder_print(root->left);
    preorder_print(root->right);
}

void postorder_print(Node *root)
{
    //  left -> right -> root
    if (root == NULL)
        return;
    postorder_print(root->right);
    postorder_print(root->left);
    cout << root->val << " ";
}

void inorder_print(Node *root)
{
    //  Left -> root -> right
    if (root == NULL)
        return;
    inorder_print(root->left);
    cout << root->val << " ";
    inorder_print(root->right);
}

int count_nodes(Node *root)
{
    if (!root)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
}

int main()
{

    /*
        10 (root)
      /  \
    20    30
   /     /  \
  40    50   60
  (c)   (d)  (e)   -> c,d,e are leaf nodes cz there are no child left from here


    */

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // connections
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    a->left = c;
    cout << "levelOrder Traversal: ";
    level_order_print(root);

    return 0;
}