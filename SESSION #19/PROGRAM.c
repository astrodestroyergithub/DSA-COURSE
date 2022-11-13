// Creating and inserting node in a binary tree

#include<stdio.h>
#include<stdlib.h>

struct TNode
{
    int data;
    struct TNode* left, right;
}*root;

void initTree()
{
    root = (struct TNode*)malloc(sizeof(struct TNode));

    printf("Enter root data to create tree");
    scanf("%d", &root->data);

    root->left = root->right = NULL;
}

void insertNode()
{
    int x;
    struct TNode* t = (struct TNode*)malloc(sizeof(struct TNode));
    struct TNode* N = root;

    t->left = t->right = NULL;
    printf("Enter data to create node");
    scanf("%d", &t->data);


    printf("Press 1 for Left Node OR Press 2 for Right Node");
    scanf("%d", &x);

    if(x==1)
    {
        while(N->left!=NULL) 
            N=N->left;
        N->left=t;
    }
    else if(x==2)
    {
        while(N->right!=NULL) 
            N=N->right;
        N->right=t;
    }

}


void insertNode()
{
    int x;
    struct TNode* t = (struct TNode*) malloc(sizeof(struct TNode));
    struct TNode* N = root;
    
    t->left = t->right = NULL;
    printf("Enter data to create node");
    scanf("%d", &t->data);
    
    
    while(1)
    {
        printf("Press 1 for Left Node OR Press 2 for Right Node");
        scanf("%d", &x);
        if(x==1)
        {
            if(N->left == NULL) 
            {
                N->left = t; break;
            }
            else
                N = N->left;
        }
        else if(x==2)
        {
            if(N->right == NULL) 
            {   
                N->right = t; break;
            }
            else
                N= N->right;
        }
    }
}