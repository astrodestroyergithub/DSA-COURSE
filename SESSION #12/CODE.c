// Doubly Linked List Implementation

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next, *prev;
};

struct Node * start = NULL;
struct Node * start2 = NULL;
struct Node * newNode = NULL;

void insertAtHead(struct Node ** start, int value)
{
	struct Node * T = (struct Node *)malloc(sizeof(struct Node *));
	T->data = value;
	if(T == NULL)
	{
		printf("Overflow!\n");
	}
	else
	{
		if(*start == NULL)
		{
			*start = T;
			T->next = NULL;
			T->prev = NULL;
			printf("Inserted\n");
		}
		else
		{
			T->next = *start;
			T->prev = NULL;
			*start = T;
			printf("Inserted\n");	
		}
	}
}

void insertAtEnd(struct Node ** start, int value)
{
	struct Node * p = (struct Node *)malloc(sizeof(struct Node *));
	p = *start;
	struct Node * X = (struct Node *)malloc(sizeof(struct Node *));
	
	X->data = value;
	X->next = NULL;
	X->prev = NULL;
	
	if(*start == NULL)
	{
		*start = X;
		printf("Inserted\n");
	}
	else
	{
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = X;
		X->prev = p;
		printf("Inserted\n");
	}
}

void insertAtAnyPosition(int aftervalue, struct Node ** start, struct Node ** newNode)
{
	struct Node * t = (struct Node *)malloc(sizeof(struct Node *));
	struct Node * i;
	struct Node * p = *newNode;
	int flag = 0;
	
	for(i=*start; i!=NULL; i=i->next)
	{
		if(i->next->data == aftervalue)
		{
			t = i->next;
			p->next = t;
			t->prev = p;
			i->next = p;
			p->prev = i;
			flag = 1;
			printf("Inserted\n");
			break;
		}
	}
	
	if(flag == 0)
		printf("Couldn't insert\n");
}

void deleteFromHead(struct Node ** start)
{
	struct Node * t = *start;
	struct Node * p;
	if(*start == NULL)
		printf("Empty, can't delete!\n");
	else
	{
		p = t;
		p = p->next;
		*start = p;
		p->prev = NULL;
		free(t);
		printf("Deleted\n");
	}
	
}

void deleteFromEnd(struct Node ** start)
{
	struct Node * t = *start;
	if(*start == NULL)
		printf("Empty, can't delete!\n");
	else
	{
		while(t->next != NULL) t = t->next;
		struct Node * p = t;
		p = p->prev;
		p->next = NULL;
		free(t);
		printf("Deleted\n");
	}
}

void deleteFromAnyPosition(int value, struct Node ** start)
{
	struct Node * t = (struct Node *)malloc(sizeof(struct node *));
	struct Node * i;
	int flag = 0;
	
	for(i=*start; i!=NULL; i=i->next)
	{
		if(i->next->data == value)
		{
			t = i->next->next;
			i->next = t;
			flag = 1;
			printf("Deleted\n");
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("Couldn't delete\n");
	}
}

void Traverse(struct Node ** start) 
{
    if(*start == NULL)
	{
		printf("List is empty!\n");
		exit(0);
	}
	struct Node * T;
	printf("The Doubly Linked List is:\n");
	for(T=*start; T!=NULL; T=T->next)
	{
		printf("%d ",T->data);
	}
	printf("\n");
}

int Search(struct Node ** start, int val) 
{
	if(*start == NULL)
	{
		printf("List is empty!\n");
		exit(0);
	}
	struct Node * T;
	int flag = 0, ctr = 0;
	for(T=*start; T!=NULL; T=T->next)
	{
		if(T->data == val)
		{
			printf("The value %d is present at index %d from start\n",val,ctr);
			flag = 1;
			break;
		}
		else
		{
			ctr++;
		}
	}
	if(flag == 0)
	{
		printf("Sorry, the value %d is not present in the list\n",val);
	}
	printf("\n");
}

void reverseList(struct Node ** start, struct Node ** start2)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node *));
	struct Node * ptr2 = (struct Node *)malloc(sizeof(struct Node *));
	
	ptr = *start;
	ptr2 = *start2;
	while(ptr != NULL)
	{
		insertAtHead(&ptr2, ptr->data);
		ptr = ptr->next;
	}
	printf("Reversed\n");
	
	printf("The Reversed List is:\n");
	ptr = ptr2;
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int main()
{
	int ch,value,afterValue;
	
	while(1)
	{
		printf("\nMENU:\n1. Insert at Head\n2. Insert at End\n3. Insert at any Position\n4. Delete from Head\n5. Delete from End\n6. Delete from any Position\n7. Traverse\n8. Search for an Element\n9. Reverse the List\n\n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value: ");
				scanf("%d",&value);
				insertAtHead(&start,value);
				break;
			case 2:
				printf("Enter the value: ");
				scanf("%d",&value);
				insertAtEnd(&start,value);
				break;
			case 3:
				printf("Insert the after value: ");
  				scanf("%d",&value);
  				newNode = (struct Node *)malloc(sizeof(struct Node *));
  				printf("Enter the value to be inserted: ");
  				scanf("%d",&newNode->data);
  				insertAtAnyPosition(value, &start, &newNode);
  				break;
			case 4:
				deleteFromHead(&start);
				break;
			case 5:
				deleteFromEnd(&start);
				break;
			case 6:
				printf("Enter the value to be deleted: ");
  				scanf("%d",&value);
  				deleteFromAnyPosition(value, &start);
			case 7:
				Traverse(&start);
				break;
			case 8:
				printf("Enter the value you want to search: ");
  				scanf("%d",&value);
  				Search(&start, value);
  				break;
			case 9:
				reverseList(&start, &start2);
  				break;
			default:
				return 0;
		}
	}
	
	return 0;
}
