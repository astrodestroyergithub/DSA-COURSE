// Doubly Circular Linked List Implementation

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next, *prev;
};

struct Node * start = NULL;

void show(struct Node ** start)
{
	struct Node * x = *start;
	do
	{
		printf("%d, ",x->data);
		x = x->next;
	}
	while(x != *start);
	printf("\n");
}

void deleteFromCircularDoublyList(struct Node ** start, int value)
{
	int found = 0;
	struct Node * Y = *start;
	struct Node * x = Y->next;
	if(x == NULL) 
	{
		printf("Data not found!\n");
		return;
	}
	if(x->data == value)
	{
	    x->prev = Y->prev;
	    Y = Y->prev;
	    *start = x;
	    Y->next = x;
	    found = 1;
	    printf("Deleted!\n");
	    return;
	}
	while(x != *start)
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
		printf("Data not found!\n");
		return;
	}
	Y->next = x->next;
	x = x->next;
	x->prev = Y;
	printf("Deleted!\n");
}

void insertIntoCircularDoublyList(struct Node ** start, int value)
{
	struct Node * t = (struct Node *)malloc(sizeof(struct Node *));
	struct Node * x = *start;
	t->data = value;
	t->next = NULL;
	if(*start == NULL)
	{
	    *start = t;
	    t->next = *start;
	    t->prev = *start;
	}
	else
	{
	    while(x->next != *start)
	    {
	        x = x->next;
	    }
	    t->next = *start;
	    x->next = t;
	    t->prev = x;
	    t = t->next;
	    x = x->next;
	    t->prev = x;
	}
	printf("Insert Success!\n");
}

int main()
{
	int ch,value;
	
	while(1)
	{
		printf("\nMENU:\n1. Insert\n2. Delete\n3. Show\n4. Exit\n\n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value: ");
				scanf("%d",&value);
				insertIntoCircularDoublyList(&start,value);
				break;
			case 2:
				printf("Enter the value: ");
				scanf("%d",&value);
				deleteFromCircularDoublyList(&start,value);
				break;
			case 3:
				show(&start);
  				break;
			case 4:
				return 0;
				break;
			default:
				return 0;
		}
	}
	
	return 0;
}
