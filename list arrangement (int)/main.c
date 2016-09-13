#include"list.h"

int main(){
    List* l;
    l=creatList();
    addStart(l,1);
    addStart(l,2);
    addStart(l,3);
    addStart(l,4);
    addStart(l,5);
    
    printList(l);
   
    freelist(l);
    l=creatList();
    addEnd(l,1);
    addEnd(l,2);
    addEnd(l,3);
    addEnd(l,4);
    addEnd(l,5);
    
    printList(l);
    
    addSort(l,9);
    addSort(l,8);
    addSort(l,10);
    addSort(l,6);
    addSort(l,7);
    
    printList(l);
    
    move(l,7);
    printList(l);
    
    removeElem(l,3);
    printList(l);
  
    freelist(l);
}
