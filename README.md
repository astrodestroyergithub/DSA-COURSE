# DSA-Course by Mr. Dipanjan Sarkar

The following are the details of what has been actually covered in each of the sessions.

## Session 1:

_**The undermentioned functionalities were taught in the rescheduled session:**_
1. Insertion of an element in an array in a specific position
2. Deletion of an element in array from a position
3. Deletion of an element from array by its value

_**Examples:**_
Let us assume that the initial array is A = {10, 20, 30, 40, 5}
-----------------------------
_(i)_ Insert by Position:
-----------------------------
	Value: ? 7
	Position: ? 1
	Output: Insert Success
	A --> 10, 7, 20, 30, 40, 5
	
	Value: ? 70
	Position: ? -1
	Output: Insert Failure
	A --> 10, 7, 20, 30, 40, 5
-----------------------------
  _(ii)_ Delete by Value:
-----------------------------
	Value: ? 45
	Output: Not Found
	A --> 10, 7, 20, 30, 40, 5
		
	Value: ? 7
	Output: Deleted
	A --> 10, 20, 30, 40, 5
-----------------------------
_(iii)_ Delete by Position:
-----------------------------
    Position: -1
	Output: Cannot Delete
	A --> 10, 20, 30, 40, 5
-----------------------------

_**The functions which we have to make use of are:**_
* void INSERT(int *A, int VALUE, int POSITION);
* void DELETE_BY_VALUE(int *A, int VALUE);
* void DELETE_BY_POSITION(int *A, int POSITION);
* void DISPLAY(int *A)

_**N.B.**_ Create a menu driven program which will prompt the user to enter a choice based upon the menu and perform it accordingly. Loop the entire program until the user explicitly chooses to exit.

## Session 2:

_**The 2 types of code were explained in the class:**_
!. Program to print the diagonals of a matrix, and the transpose of the matrix
2. Program to merge 2 arrays: 
* The 2 arrays were sorted first before merging
* The final array is formed by sequentially comparing the array elements of the 2 small arrays

_**The function definitions of the 2 programs to merge 2 arrays:**_
* int * mergeSorted(int * A, int N1, int * B, int N2)
* int * mergeSequential(int * A, int N1, int * B, int N2) 

_**N.B.**_ Create a menu driven program that allows the user to choose what type of merge to use i.e. **Sorted Merge** or **Sequential Merge**.

## Session 3:

_**Problem 1:**_ Design a menu-driven C program to implement the underlying functions
* int ** CREATE_SYMMETRIC_MATRIX(int ** A, int R) 
* int ** CREATE_SKEW_SYMMETRIC_MATRIX(int ** A, int R) 
* int CHECK_SYMMETRIC(int ** A, int R) 
* int CHECK_SKEW_SYMMETRIC(int ** A, int R) 

_**Problem 2:**_ Desin a menu-driven C program to implement the underlying functions
* void SUM(int ** A, int ** B, int R, int C) 
* int ** DIFFERENCE(int ** A, int ** B, int R, int C)

_**N.B.**_ The programs should be completely menu-driven with each case denoting each function's use.

## Session 4:

_**Problem:**_ Engineer a C program that prints the inner shell and outer shell of a square matrix. The function definitions of the functions to be used are given below.
* void INNER_SHELL(int ** A, int ** B, int C)
* void OUTER_SHELL(int ** A, int ** B, int C)

_**N.B.**_ No need to design a menu-driven program. You can swing at your own flexibility.

## Session 5:

_**Problem 1:**_ Implement an array Stack with the undermentioned function
* void PUSH(struct Stack * X, int VALUE)
* void POP(struct Stack * X)
* void PEEK(struct Stack * X)
* void DISPLAY(struct Stack * X)

The structure of the stack will be as follows:
typedef struct Stack
{
    int * A;
    int Top;
    int Capacity;
};

_**Problem 2:**_ Implement an array Queue with the undermentioned functions
* void ENQUEUE(struct Queue * Q, int V)
* void DEQUEUE(struct Queue * Q)
* void PEEK(struct Queue * Q)
* void DISPLAY(struct Queue * Q)

The structure of the queue will be as follows:
typedef struct Queue
{
    int * A;
    int Front;
    int Rear;
    int Capacity;
};

_**N.B.**_ Design menu-driven programs for each of the data structures, where each of the case corresponds to each of the methods listed under each problem.

## Session 6:

_**Problem:**_ Implementation of a DeQueue a.k.a. Double-Ended Queue
_Information:_ In a DeQueue, insertion and deletion can happen both from the front as well as rear (unlike a normal Queue). Implement the following functions for the DeQueue.
* void DeleteFromRear(struct Queue * Q)
* void InsertAtFront(struct Queue * Q, int V)
* void DeleteFromFront(struct Queue * Q)
* void InsertAtRear(struct Queue * Q, int V)
* void PEEK(struct Queue * Q)
* void DISPLAY(struct Queue * Q)

The structure of the DeQueue will be as follows:
typedef struct Queue
{
    int * A;
    int Front;
    int Rear;
    int Capacity;
};

_**N.B.**_ Make the program menu-driven.

## Session 7:

_**Problem:**_ Create a linked list using the following Node, marking the ending and beginning Node.

```
Node ->
int id
float salary
```
_InformationL:_ A linked list is a collection of notes, where each node points to another in a orderly manner. A linked list is also known as a collection of similar nodes.

![Visual representation of Linked List](https://github.com/astrodestroyergithub/AstroWeb/blob/master/static/media/garung.767669.png)

_**N.B.**_ This is an elementary representation of linked list.

## Session 8 & 9:

_**Problem:**_ More discussions on linked list. What are the operations which we can perform on a linked list.

Some of the common operations are mentioned below:
```
1. Insertion of a Node
2. Deletion of a Node
3. Traversing the Linked List
4. Sorting the Linked List
5. Reversing the Linked List
```
_**N.B.**_ A menu-driven program show have the following methods for manipulating the Linked List:
* void insertAtStart(struct Node ** start, int value)
* void insertAtEnd(struct Node ** start, int value)
* void insertAtAnyPosition(int aftervalue, struct Node ** start, struct Node ** newNode)
* void printEnd(struct Node ** start)
* void Traverse(struct Node ** start) 
* int Search(struct Node ** start, int val) 
* void deleteAtStart(struct Node ** start)
* void deleteAtEnd(struct Node ** start)
* void deleteFromAnyPosition(int value, struct Node ** start)
* void sortList(struct Node ** start)
* void reverseList(struct Node ** start, struct Node ** start2)

## Session 10: 

_**Problem:**_ Use Linked List to find sum of 2 polynomials.

* For same length lists
```
void sumof2polynomials(struct Node ** h1, struct Node ** h2)
```

* For different length lists
```
void sumof2polynomials(struct Node ** h1, struct Node ** h2)
```

## Session 11 & 12: 

_**Problem:**_ Create a Doubly-Ended Linked List and perform modification using functions.

_**Information:**_ A doubly linked list is a linked data structure that consists of a set of sequentially linked records called nodes. Each node contains three fields: two link fields (references to the previous and to the next node in the sequence of nodes) and one data field. The beginning and ending nodes' previous and next links, respectively, point to some kind of terminator, typically a sentinel node or null, to facilitate traversal of the list. If there is only one sentinel node, then the list is circularly linked via the sentinel node. It can be conceptualized as two singly linked lists formed from the same data items, but in opposite sequential orders.

Some of the common operations to be performed on the doubly-ended linked list are mentioned below:
```
1. Insertion of a Node
2. Deletion of a Node
3. Traversing the Linked List
4. Sorting the Linked List
5. Reversing the Linked List
```
_**N.B.**_ A menu-driven program show have the following methods for manipulating the Linked List:
* void insertAtStart(struct Node ** start, int value)
* void insertAtEnd(struct Node ** start, int value)
* void insertAtAnyPosition(int aftervalue, struct Node ** start, struct Node ** newNode)
* void printEnd(struct Node ** start)
* void Traverse(struct Node ** start) 
* int Search(struct Node ** start, int val) 
* void deleteAtStart(struct Node ** start)
* void deleteAtEnd(struct Node ** start)
* void deleteFromAnyPosition(int value, struct Node ** start)
* void sortList(struct Node ** start)
* void reverseList(struct Node ** start, struct Node ** start2)

## Others
_The other notable important programs included in this repo are:_
* G.C.D. of 2 numbers
* Patterns problems
* Product of 2 matrices
* Spiral of a square matrix
* Sum and difference of equations

## Useful Links:
* https://guides.github.com/features/mastering-markdown/
* https://www.youtube.com/playlist?list=PLwG71Wli1HhYCuSM6Hstcez5qipf2G3tE
