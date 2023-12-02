#include <iostream>
using namespace std;

struct node
{
   
    node *left;
    node *right;
    int data;
};
// class tree{
//     public:

// };
node *newnode(int val)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

void printtree(node* n)
{
    while(n!= nullptr)
    {
        cout<<n->data;
        n= n->left;
    }
    cout<<endl;
}
int main()
{

    node* root = newnode(1);
    root->left = newnode(3);
    root->right = newnode(5);

    printtree(root);
    return 0;
}