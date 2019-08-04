#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

char pre[27];
char in[27];

typedef struct tnode
{
    int data;
    tnode* left;
    tnode* right;
} tnode;


tnode* createTree(char pre[], char in[], int len)
{
    if(len == 0) return NULL;
    int k = 0;
    while(in[k]!=pre[0]) k++;
    tnode* root = (tnode*)malloc(sizeof(tnode));
    root->data = pre[0];
    root->left = createTree(pre+1, in, k);
    root->right = createTree(pre+k+1, in+k+1, len-k-1);
    return root;
}

void output(tnode* root)
{
    if(root != NULL)
    {
        output(root->left);
        output(root->right);
        char c = root->data;
        cout<<c;
    }
}

void deleteTree(tnode* root)
{
    if(root==NULL) return;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}

int main()
{
    tnode* root = NULL;
    while(scanf("%s", &pre)!=EOF)
    {
        scanf("%s", &in);
        int len = strlen(pre);
        root = createTree(pre, in, len);
        output(root);
        cout<<endl;
        deleteTree(root);
    }
    return 0;
}
