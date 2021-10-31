// C implementation of a DeQueue
// In a DeQueue insertion and deletion can happen both from the front as well as rear

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int * A;
    int Front;
    int Rear;
    int Capacity;
};

void DeleteFromRear(struct Queue * Q)
{
	if(Q->Front == -1)
	{
		printf("DeQueue Underflow!\n");
	}
	else if(Q->Front == Q->Rear)
	{
		printf("%d is DELETED\n",*(Q->A+Q->Rear));
		Q->Front = -1;
		Q->Rear = -1;
	}
	else
	{
		printf("%d is DELETED\n",*(Q->A+Q->Rear));
		Q->Rear = Q->Rear - 1;
	}
}

void InsertAtFront(struct Queue * Q, int V)
{
	if(Q->Front - 1 < 0)
	{
		printf("DeQueue Overflow!");
	}
	else
	{
		Q->Front = Q->Front - 1;
		*(Q->A+Q->Front) = V;
		printf("INSERT %d Success!\n",V);
	}
}

void DeleteFromFront(struct Queue * Q)
{
	if(Q->Front == -1)
    {
        printf("DeQueue Underflow!\n");
    }
    else
    {
        printf("%d is DELETED\n",*(Q->A + (Q->Front)++));
        if(Q->Front > Q->Rear)
        {
            Q->Rear = -1;
            Q->Front = -1;
        }
    }
}

void InsertAtRear(struct Queue * Q, int V)
{
	if(Q->Rear + 1 >= Q->Capacity)
    {
        printf("DeQueue Overflow!\n");
    }
    else
    {
        *(Q->A + ++(Q->Rear)) = V;
        if(Q->Rear == 0)
            Q->Front = 0;
        printf("INSERT %d Success!\n", V);
    }
}

void PEEK(struct Queue * Q)
{
    if(Q->Front == -1)
    {
        printf("DeQueue Underflow!\n");
    }
    else
    {
        printf("Peeked value: %d\n", *(Q->A + Q->Front));
    }
}

void DISPLAY(struct Queue * Q)
{
    int i;
    printf("Now, the DeQueue is: ");
    if(Q->Front == -1 && Q->Rear == -1)
    {
        printf("Empty\n");
    }
    else
    {
        for(i=Q->Front; i<=Q->Rear; i++)
        {
            printf("%d ",*(Q->A + i));
        }
        printf("\n");
    }
}

int main()
{
    int CH, V;
    struct Queue Q;
    printf("Enter the Capacity of DeQueue: ");
    scanf("%d", &Q.Capacity);
    Q.A = (int *)malloc(Q.Capacity * sizeof(int));
    Q.Front = -1;
    Q.Rear = -1;
    while(1)
    {
        printf("\n1. INSERT AT REAR\n2. DELETE FROM REAR\n3. INSERT AT FRONT\n4. DELETE FROM FRONT\n5. PEEK\n6. DISPLAY\n7. EXIT\nEnter your choice: ");
        scanf("%d", &CH);
        switch (CH)
        {
            case 1:
                printf("What value to INSERT? ");
                scanf("%d", &V);
                InsertAtRear(&Q, V);
                break;
            case 2:
                DeleteFromRear(&Q);
                break;
            case 3:
                printf("What value to INSERT? ");
                scanf("%d", &V);
                InsertAtFront(&Q, V);
                break;
            case 4:
                DeleteFromFront(&Q);
                break;
            case 5:
                PEEK(&Q);
                break;
            case 6:
                DISPLAY(&Q);
                break;
            case 7:
                exit(0);
                break;
        }
    }
    return 0;
}