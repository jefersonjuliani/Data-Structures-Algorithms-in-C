#include"linkedlist.h"
#include<stdio.h>
int main(){
    Head* x,*y;
    
    x=creatList();
    y=creatList();
    
    addBeg(x,1);
    addEnd(x,2);
    addEnd(x,3);
    addEnd(y,4);
    addEnd(y,5);
    addEnd(y,6);
    
    
    printf("%d\n",size(x));
    printf("---------\n");
    
    printList(x);
    printf("---------\n");
    
    printf("%d\n",search(x,3));
    printf("---------\n");
    
    removePos(x,3);
    printList(x);
    printf("---------\n");
    
    printList(y);
    printf("---------\n");
    
    merge(x,y);
    printList(x);
    printf("---------\n");
    
    addPos(x,3,3);
    printList(x);
    printf("---------\n");
    
    freeList(x);
    return 0;
}
