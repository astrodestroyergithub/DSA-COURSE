#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int * A;
    int Top;
    int Capacity;
};
void PUSH(struct Stack * X, int VALUE)
{
    if (X->Top + 1 >= X->Capacity)
        printf("Stack Overflow!");
    else
    {
        *(X->A + (++(X->Top))) = VALUE;
        printf("Push %d Success!", VALUE);
    }
}
void POP(struct Stack * X)
{
    if (X->Top == -1)
        printf("Stack Underflow!");
    else
    {
        printf("Popped Value: %d", *(X->A + (X->Top)--));
    }
}
void PEEK(struct Stack * X)
{
    if (X->Top == -1)
        printf("Stack Underflow!");
    else
    {
        printf("Peeked Value: %d", *(X->A + X->Top));
    }
}
void DISPLAY(struct Stack * X)
{
    int i;
    printf("Now, the Stack is :\n");
    if(X->Top == -1)
        printf("Empty\n");
    for (i = X->Top; i >= 0; i--)
        printf("%d\n", *(X->A + i));
}
int main()
{
    int CH, V;
    struct Stack S;
    printf("Enter capacity of Stack: ");
    scanf("%d", &S.Capacity);
    S.A = (int *)malloc(S.Capacity * sizeof(int));
    S.Top=-1;
    while (1)
    {
        printf("\n1. PUSH\t2. POP\t3. PEEK\t4. DISPLAY\t5. EXIT\nEnter your choice: ");
        scanf("%d", &CH);
        switch (CH)
        {
            case 1:
                printf("What value to PUSH? ");
                scanf("%d", &V);
                PUSH(&S, V);
                break;
            case 2:
                POP(&S);
                break;
            case 3:
                PEEK(&S);
                break;
            case 4:
                DISPLAY(&S);
                break;
            case 5:
                return 0;
                break;
        }
    }
    return 0;
}