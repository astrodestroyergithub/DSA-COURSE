#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coeff;
	int power;
	struct Node * next;
};

struct Node * start1;
struct Node * start2;
struct Node * start3;

void insertAtEnd(struct Node ** start, int pow, int coeff)
{
	struct Node * p = (struct Node *)malloc(sizeof(struct Node *));
	p = *start;
	struct Node * X = (struct Node *)malloc(sizeof(struct Node *));
	
	X->coeff = coeff;
	X->power = pow;
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

void Traverse(struct Node ** start) 
{
    if(*start == NULL)
	{
		printf("List is empty!\n");
		exit(0);
	}
	struct Node * T;
	for(T=*start; T!=NULL; T=T->next)
	{
		printf("%dx^%d ",T->coeff,T->power);
	}
	printf("\n");
}

// Different length lists
void sumof2polynomials(struct Node ** h1, struct Node ** h2)
{
	struct Node * p = (struct Node *)malloc(sizeof(struct Node *));
	p = *h1;
	struct Node * q = (struct Node *)malloc(sizeof(struct Node *));
	q = *h2;
	
	int pow, coeff1, coeff2, coeff3;
	
	if(*h1 == NULL && *h2 == NULL)
	{
		printf("Both the polynomials are empty!\n");
	}
	else if(*h1 == NULL)
	{
		printf("The first polynomial is empty!\n");
	}
	else if(*h2 == NULL)
	{
		printf("The second polynomial is empty!\n");
	}
	else
	{
		while(p != NULL && q != NULL)
		{
			pow = p->power;
			coeff1 = p->coeff;
			coeff2 = q->coeff;
			coeff3 = coeff1 + coeff2;
			
			insertAtEnd(&start3,pow,coeff3);
			
			p = p->next;
			q = q->next;
		}
		while(p != NULL)
		{
			pow = p->power;
			coeff3 = p->coeff;
			
			insertAtEnd(&start3,pow,coeff3);
			
			p = p->next;
		}
		while(q != NULL)
		{
			pow = q->power;
			coeff3 = q->coeff;
			
			insertAtEnd(&start3,pow,coeff3);
			
			q = q->next;
		}
	}
}

int main()
{
	int i,m,coeff;
	
	printf("Enter the maximum power of the first equation: ");
	scanf("%d",&m);
	
	for(i=0;i<=m;i++)
	{
		printf("Enter the coefficient of power %d of x: ",i);
		scanf("%d",&coeff);
		insertAtEnd(&start1,i,coeff);
	}
	
	printf("\nEnter the maximum power of the second equation: ");
	scanf("%d",&m);
	
	for(i=0;i<=m;i++)
	{
		printf("Enter the coefficient of power %d of x: ",i);
		scanf("%d",&coeff);
		insertAtEnd(&start2,i,coeff);
	}
	
	printf("\n");
	
	// Different length lists
	sumof2polynomials(&start1, &start2);
	
	printf("\nThe first and second polynomials are:\n");
	Traverse(&start1);
	Traverse(&start2);
	
	printf("\nThe sum of the polynomials are:\n");
	Traverse(&start3);
	
	return 0;
}

