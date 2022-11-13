// Pre-order traversal in a tree

#include<stdio.h>
#include<stdlib.h>

struct TNode
{
    int value;
    struct TNode * left, * right; 
} * root;

struct TStack 
{
    struct TNode * data;
    struct TStack * next; 
} * top;

void initStack() 
{ 
    top = NULL; 
}

void initTree() 
{ 
    root = NULL; 
}

struct TNode * createNode(int x)
{
    struct TNode * t = (struct TNode * )malloc(sizeof(struct TNode));
    t->value = x;
    t->left = t->right = NULL;
    return t;
}

void pushStack(struct TNode * value)
{
    struct TStack * t = (struct TStack * )malloc(sizeof(struct TStack));
    t->data = value;
    t->next = NULL;
  
    if(top == NULL)
    top = t;
    else
    {
        t->next = top;
        top = t;
    }
}

struct TNode * popStack()
{
    struct TNode * t = (struct TNode * )malloc(sizeof(struct TNode));
    if(top==NULL)
    {
        printf("Stack Underflow");
        return NULL;
    }
    else
    {
        printf("%d, ", top->data->value);
        t = top->data;
        top=top->next;
        return t;
    }
}

void preOrderTraversal(struct TNode * ROOT)
{
    struct TNode * T = ROOT;
    initStack();
    pushStack(T);
    
    while(top != NULL)
    {
        T = popStack();
        if(T->right != NULL)pushStack(T->right);
        if(T->left != NULL)pushStack(T->left);
    }
}

int main()
{
    initTree();
    root = createNode(1);
    root->left= createNode(2);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right = createNode(3);
    
    printf("Pre Order Traversal is:\n");
    preOrderTraversal(root);
    
    return 0;
}
