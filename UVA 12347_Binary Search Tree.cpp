#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct tnode
{
    int value;
    tnode* left;
    tnode* right;
}tnode;

tnode *create(int v)
{
    tnode* temp =(tnode*)malloc(sizeof(tnode));
    //cout<<"         "<<v<<endl;
    temp->value = v;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

tnode* Insert(tnode* root, int v)
{
    //cout<<"                   "<<root->value<<endl;
    if(root==NULL) root=create(v);
    else if(v>root->value) root->right=Insert(root->right, v);
    else if(v<root->value) root->left=Insert(root->left, v);
    //cout<<"                   "<<root->value<<endl;
    return root;
}


void print(tnode* root)
{
    if(root!=NULL)
    {
        print(root->left);
        print(root->right);
        printf("%d\n", root->value);
    }
    //cout<<endl;
}


int main()
{
    //freopen("in.txt","r", stdin);
    int n;
    tnode* root = NULL;
    while(scanf("%d", &n)!=EOF)
    {
        //cout<<n<<endl;
        root = Insert(root, n);
    }
    print(root);
    return 0;
}
