#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int * A;
    int Front;
    int Rear;
    int Capacity;
};

void ENQUEUE(struct Queue * Q, int V)
{
    if(Q->Rear + 1 >= Q->Capacity)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        *(Q->A + ++(Q->Rear)) = V;
        if(Q->Rear == 0)
            Q->Front = 0;
        printf("INSERT %d Success!\n", V);
    }
}

void DEQUEUE(struct Queue * Q)
{
    if(Q->Front == -1)
    {
        printf("Queue Underflow!\n");
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

void PEEK(struct Queue * Q)
{
    if(Q->Front == -1)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("Peeked value: %d", *(Q->A + Q->Front));
    }
}

void DISPLAY(struct Queue * Q)
{
    int i;
    printf("Now, the Queue is: ");
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
    }
}

int main()
{
    int CH, V;
    struct Queue Q;
    printf("Enter the Capacity of Queue: ");
    scanf("%d", &Q.Capacity);
    Q.A = (int *)malloc(Q.Capacity * sizeof(int));
    Q.Front = -1;
    Q.Rear = -1;
    while(1)
    {
        printf("\n1. ENQUEUE\t2. DEQUEUE\t3. PEEK\t4. DISPLAY\t5. EXIT\nEnter your choice: ");
        scanf("%d", &CH);
        switch (CH)
        {
            case 1:
                printf("What value to INSERT? ");
                scanf("%d", &V);
                ENQUEUE(&Q, V);
                break;
            case 2:
                DEQUEUE(&Q);
                break;
            case 3:
                PEEK(&Q);
                break;
            case 4:
                DISPLAY(&Q);
                break;
            case 5:
                return 0;
                break;
        }
    }
    return 0;
}