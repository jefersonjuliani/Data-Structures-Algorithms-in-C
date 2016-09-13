#define MAX 100
#define TRUE 1
#define FALSE 0

/* By: Jeferson da Silva Juliani
 * Universidade Federal of Ceará
*/
typedef struct list{
  int item[MAX];
  int p;
}List;

// This function creat a list of integer, and returns a pointer of List
List* creatList();

/* This function takes as parameter an List 'x' and returns 0 for error 
 * and 1 for correct. It's function is to check if the List is full.
*/
int fullist(List* x);

/* This function takes as parameter an integer 'y' and a type List,  
 * and returns 0 for error or 1 for correct. It's function is adds
 * this 'y' at the start of the List.
*/
int addStart(List* x,int y);

/* This function takes as parameter an integer 'y' and a type List,  
 * and returns 0 for error or 1 for correct. It's function is adds
 * this 'y' at the end of the List.
*/
int addEnd(List* x,int y);

/* This function takes as parameter an integer 'y' and a type List,  
 * and returns 0 for error or 1 for correct. It's function is adds
 * this 'y' in the list of way ordered.
*/
int addSort(List* x,int y);

// This function takes as parameter an List 'x' and free this List.
void freelist(List* x);

// This function takes as parameter an List 'x' and print this List.
void printList(List* x);

/* This function takes as parameter an List 'x' and a integer 'pos'.
 * It's function is to move the positions of the List for left.
*/
void move(List* x,int pos);

/* This function takes as parameter an List 'x' and a integer 'elem'.
 * It's function is to remove the element of the List.
*/
int removeElem(List* x, int elem);

/* This function takes as parameter an List 'x' and a integer 'elem',
 * and returns the position of 'elem' in the List or -1 for element no found.
*/
int position(List* x,int elem);
