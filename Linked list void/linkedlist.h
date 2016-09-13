
/* By: Jeferson da Silva Juliani
 * Universidade Federal of Ceará
 * Linked List
*/

typedef struct node{
    void* date;
    struct node* link;
}Node;

typedef struct head{
  Node* start;
  char type[6];
}Head;


// This function creat a linked list generic(void*), and returns a pointer to the Head.

Head* creatList(char type[6]);

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

/* This function takes as parameter the Head of the List 'x' and a pointer 
 * of Void 'y'. It's function is adds this 'y' at the start of the List.
*/
void addBeg(Head* x, void* y);

/* This function takes as parameter the Head of the List 'x' and a pointer 
 * of Void  'y'. It's function is adds this 'y' at the end of the List.
*/
void addEnd(Head* x, void* y);

/* This function takes as parameter the Head of the List 'x', a pointer of 
 * Void 'y' and an position 'pos'. It's function is adds this 'y' in the position
 * 'pos'.
*/
void addPos(Head* x, void* y, int pos);

/* This function takes as parameter the Head of the List 'x'. It's function
 * is print the whole List.
*/
void printList(Head *x);

/* This function takes as two parameters the Head of the List 'x' and 'y'.
 * It's function is concatenate this two parameters.
*/
void merge(Head* x,Head* y);
