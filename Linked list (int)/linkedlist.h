
/* By: Jeferson da Silva Juliani
 * Universidade Federal of Ceará
*/

typedef int info;

typedef struct node{
    info date;
    struct node* link;
}Node;

typedef struct head{
  Node* start;
}Head;

// This function creat a list of integer, and returns a pointer to the Head.

Head* creatList();

/* This function takes as parameter the Head of the List 'x' and releases 
 * the whole List.
*/
void freeList(Head* x);

/* This function takes as parameter the Head of the List 'x' and returns an  
 * integer with size this List.
*/
int size(Head *x);

/* This function takes as parameter the Head of the List 'x' and returns an 
 * value boolean if the List is full.
*/
int emptyList(Head *x);

/* This function takes as parameter the Head of the List 'x' and integer 'y'.
 * It's function is adds this 'y' at the start of the List.
*/
void addBeg(Head* x, int y);

/* This function takes as parameter the Head of the List 'x' and integer 'y'.
 * It's function is adds this 'y' at the end of the List.
*/
void addEnd(Head* x, int y);

/* This function takes as parameter the Head of the List 'x', integer 'y'
 * and an position 'pos'. It's function is adds this 'y' in the position
 * 'pos'.
*/
void addPos(Head* x, int y, int pos);

/* This function takes as parameter the Head of the List 'x'. It's function
 * is print the whole List.
*/
void printList(Head *x);

/* This function takes as parameter the Head of the List 'x'.It's function 
 * is remove the start position.
*/
int removeBeg(Head* x);

/* This function takes as parameter the Head of the List 'x' and an 
 * position 'pos'. It's function is remove the position 'pos'.
*/
int removePos(Head* x, int pos);

/* This function takes as parameter the Head of the List 'x' and an
 * element 'elem'. It's function is search this element 'elem' in the List.
*/
int search(Head* x, int elem);

/* This function takes as two parameters the Head of the List 'x' and 'y'.
 * It's function is concatenate this two parameters.
*/
void merge(Head* x,Head* y);
