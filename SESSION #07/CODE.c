#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
  int id;
  float salary;
  struct Node * next;
};

struct Node * head = NULL;
struct Node * tail;
struct Node * temp;
struct Node * new;

void insert()
{
    int id; float salary;
    printf("Enter the ID of employee: ");
    scanf("%d",&id);
    printf("Enter the salary of employee: ");
    scanf("%f",&salary);
    
    temp = (struct Node *) malloc(sizeof(struct Node));
    
    if (temp == NULL) 
    {
      printf("No more space for accomodation!\n");
    } 
    else if (head == NULL) 
    {
      temp->id = id;
      temp->salary = salary;
      temp -> next = NULL;
      head = tail = temp;
    } 
    else 
    {
      temp->id = id;
      temp->salary = salary;
      temp -> next = NULL;
      tail -> next = temp;
      tail = temp;
    }
}

void traverse()
{
  printf("\nThe employees are:\n\n");
  
  for(new=head; new!=NULL; new=new->next)
  {
    printf("ID: %d, Salary: %.2f\n",new->id,new->salary);
  }
}

int main()
{
  int i,n;
  printf("Enter the number of employees: ");
  scanf("%d",&n);

  for(i=0; i<n; i++)
  {
    insert();
  }

  traverse();

  return 0;
}


