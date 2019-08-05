#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* newNode (int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void printInorder (struct Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder (node->right);
}
Node* constructTree(int n, int pre[], char preLN[]);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* root = NULL;
        int n;
        cin>>n;
        int pre[n];
        char preLN[n];
        for(int i=0; i<n; i++)cin>>pre[i];
        for(int i=0; i<n; i++)cin>>preLN[i];
        root = constructTree (n, pre, preLN);
        printInorder(root);
        cout<<endl;
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed

int tree(Node *curr, int n, int pre[], char preLN[], int ptr) {
    if(ptr >= n)  { 
        curr = NULL;
        return n;
    }
    curr -> data = pre[ptr];
    if(preLN[ptr] == 'N') {
        int get_left, get_right;
        Node *left;
        Node *right;
        left = new Node;
        curr -> left = left;
        get_left = tree(left, n, pre, preLN, ptr + 1);
        if(get_left < n) {
            right = new Node;
            curr -> right = right;
            get_right = tree(right, n, pre, preLN, get_left);
        }
        else get_right = n;
        return get_right;
    }
    else {
        curr -> left = NULL;
        curr -> right = NULL;
        return ptr + 1;
    }
} 

struct Node *constructTree(int n, int pre[], char preLN[])
{
    Node *root;
    root = new Node;
    tree(root, n, pre, preLN, 0);
    return root;
}