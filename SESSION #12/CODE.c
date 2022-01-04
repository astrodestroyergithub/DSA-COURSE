#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node *next, *prev;
}

void insertAtHead(struct Node *t)
{
	if(start == NULL)
		start = t;
	else
	{
		t->next = start;
		start->prev = t;
		start = t;
	}
}

insert
delete
traverse
search
reverse

int main()
{
	
	
	return 0;
}
