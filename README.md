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

## Credits:
* https://guides.github.com/features/mastering-markdown/
