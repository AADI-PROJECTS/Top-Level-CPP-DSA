#include <iostream>
#include <stack>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void zigzagTree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> currlevel;
    stack<node *> nextlevel;
    currlevel.push(root);
    bool pointer = true;
    while (!currlevel.empty())
    {
        node *temp = currlevel.top();
        currlevel.pop();
        if (temp)
        {
            cout << temp->data << " ";
            if (pointer)
            {
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }

            else
            {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }
        if (currlevel.empty())
        {
            pointer = !pointer;
            swap(currlevel, nextlevel);
        }
    }
}
int main()
{
    node *root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);
    zigzagTree(root);
}