#include <stdio.h>
#include <stdlib.h>

struct Node 
{
  int data;
  struct Node * next;
};

struct Node * start = NULL;
struct Node * start2 = NULL;
struct Node * newNode = NULL;

void insertAtStart(struct Node ** start, int value) 
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
			printf("Inserted\n");
		}
		else
		{
			T->next = *start;
			*start = T;
			printf("Inserted\n");	
		}
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
	printf("The Linked List is:\n");
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

void printEnd(struct Node ** start)
{
	struct Node * temp;
	temp = *start;
	while(temp != NULL)
	{
		if(temp->next == NULL)
		{
			printf("End Node: %d\n",temp->data);
		}
		temp = temp->next;
	}
}


void deleteAtStart(struct Node ** start)
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
		free(t);
		printf("Deleted\n");
	}
	
}

void deleteAtEnd(struct Node ** start)
{
	struct Node * t = *start;
	if(*start == NULL)
		printf("Empty, can't delete!\n");
	else
	{
		while(t->next->next != NULL) t = t->next;
		struct Node * p = t;
		p->next = NULL;
		t = t->next;
		free(t);
		printf("Deleted\n");
	}
}

void sortList(struct Node ** start)
{
	struct Node * i;
	struct Node * j;
	struct Node * t = (struct Node *)malloc(sizeof(struct Node *));
	for(i=*start; i!=NULL; i=i->next)
	{
		for(j=*start; j->next!=NULL; j=j->next)
		{
			if(j->data > j->next->data)
			{
				t->data = j->data;
				j->data = j->next->data;
				j->next->data = t->data;
			}
		}
	}
	printf("Sorted\n");
}

void reverseList(struct Node ** start, struct Node ** start2)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node *));
	struct Node * ptr2 = (struct Node *)malloc(sizeof(struct Node *));
	
	ptr = *start;
	ptr2 = *start2;
	while(ptr != NULL)
	{
		insertAtStart(&ptr2, ptr->data);
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

void insertAtEnd(struct Node ** start, int value)
{
	struct Node * p = (struct Node *)malloc(sizeof(struct Node *));
	p = *start;
	struct Node * X = (struct Node *)malloc(sizeof(struct Node *));
	
	X->data = value;
	X->next = NULL;
	
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
		printf("Inserted\n");
	}
}

int main()
{
  int ch,val;
  
  while(1)
  {
  	printf("\nSelect your choice:\n");
  	printf("1.  Insert node at start\n2.  Traverse the list\n3.  Search for an element\n4.  Insert node at end\n5.  Print the end node\n6.  Delete the node at start\n7.  Delete the node at end\n8.  Sort the list\n9.  Reverse the list\n10. Exit\n\n");
  	printf("Enter your choice: ");
  	scanf("%d",&ch);
  	
  	switch(ch)
  	{
  		case 1:
  			printf("Enter the data to be inserted: ");
  			scanf("%d",&val);
  			insertAtStart(&start, val);
  			break;
  		case 2:
  			Traverse(&start);
  			break;
  		case 3:
  			printf("Enter the value you want to search: ");
  			scanf("%d",&val);
  			Search(&start, val);
  			break;
  		case 4:
  			printf("Enter the data to be inserted: ");
  			scanf("%d",&val);
  			insertAtEnd(&start, val);
  			break;
  		case 5:
  			printEnd(&start);
  			break;
  		case 6:
  			deleteAtStart(&start);
  			break;
  		case 7:
  			deleteAtEnd(&start);
  			break;
  		case 8:
  			sortList(&start);
  			break;
  		case 9:
  			reverseList(&start, &start2);
  			break;
  		case 10:
  			return 0;
  		default:
  			return 0;	
	}
  }

  return 0;
}

