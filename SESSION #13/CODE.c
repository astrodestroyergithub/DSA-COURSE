// Circular Linked List Implementation

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node * start = NULL;

void show(struct Node * start)
{
	struct Node * x = start;
	do
	{
		printf("%d, ",x->data);
		x = x->next;
	}
	while(x != start);
}

void insertInCircularDoublyList(struct Node * start, int value)
{
	struct Node * t = (struct Node *)malloc(sizeof(struct Node));
	struct Node * x = start;
	t->data = value;
	t->next = NULL;
	while(x != NULL)
	{
		if(x->next == start) break;
		if(x->next != NULL && x->next->data > value) break;
		x = x->next;
	}
	t->next = x->next;
	x->next->prev = t;
	x->next = t;
	t->prev = x;
	printf("Insert Success!");
}

void deleteFromCircularDoublyList(struct Node * start, int value)
{
	int found = 0;
	struct Node * Y = start;
	struct Node * x = start->next;
	if(x == NULL) 
	{
		printf("Data not found!");
		return;
	}
	while(x->next != start)
	{
		if(x->next->data == value)
		{
			found = 1;
			break;
		}
		Y = x;
		x = x->next;
	}
	if(!found)
	{
		printf("Data not found!");
		return;
	}
	Y->next = x->next;
	x->next->prev = Y;
	printf("Deleted!");
}

void delete(struct Node * start, int value)
{
	int found = 0;
	struct Node * Y = start;
	struct Node * x = start->next;
	if(x == NULL) 
	{
		printf("Data not found!");
		return;
	}
	while(x->next != start)
	{
		if(x->next->data == value)
		{
			found = 1;
			break;
		}
		Y = x;
		x = x->next;
	}
	if(!found)
	{
		printf("Data not found!");
		return;
	}
	Y->next = x->next;
	printf("Deleted!");
}

void insert(struct Node * start, int value)
{
	struct Node * t = (struct Node *)malloc(sizeof(struct Node));
	struct Node * x = start;
	t->data = value;
	t->next = NULL;
	while(x != NULL)
	{
		if(x->next == start) break;
		if(x->next != NULL && x->next->data > value) break;
		x = x->next;
	}
	t->next = x->next;
	x->next = t;
	printf("Insert Success!");
}

Node * getEnd(struct Node * start)
{
	struct Node * X = start;
	if(X == NULL) return NULL;
	else if(X->next == NULL) return X;
	else
}

int main()
{
	
	
	return 0;
}
