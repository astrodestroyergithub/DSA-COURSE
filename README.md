# DSA-Course

The following are the details of what has been actually covered in each of the sessions.

###### Session 1:

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
I. void INSERT(int *A, int VALUE, int POSITION);
II. void DELETE_BY_VALUE(int *A, int VALUE);
III. void DELETE_BY_POSITION(int *A, int POSITION);
IV. void DISPLAY(int *A)

_**N.B.**_ Create a menu driven program which will prompt the user to enter a choice based upon the menu and perform it accordingly. Loop the entire program until the user explicitly chooses to exit.

