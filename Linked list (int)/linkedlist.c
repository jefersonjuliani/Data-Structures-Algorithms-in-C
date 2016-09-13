#include "linkedlist.h"
#include<stdio.h>
#include<stdlib.h>

#define START (x->start)


Head* creatList(){
    Head* x=(Head*) malloc(sizeof(Head));
    x->start=NULL;
    return x;
}

void freeList(Head* x){
    if(x!=NULL){
        Node* temp,*aux=START;
        while(aux!=NULL){
            temp=aux;
            aux=temp->link;
            free(temp);
        }
    }
    free(x);

}

int size(Head *x){
    if(x==NULL) return 0;
    int count=0;
    Node* temp=START;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
}

int emptyList(Head *x){
    return (START == NULL);
}

void addBeg(Head* x, int y){
   Node* new =(Node*) malloc (sizeof(Node));
   new->date=y;
   new->link=START;
   x->start=new;
    
}

void addEnd(Head* x, int y){
    Node *new, *aux;
    new=(Node*) malloc (sizeof(Node));
    new->date=y;
    new->link=NULL;
    if(emptyList(x))
        START=new;
    else{
        aux=START;
        while(aux->link!=NULL)
            aux=aux->link;
        aux->link=new;
    }
}
void addPos(Head* x, int y, int pos){
    register int i;
    Node *new, *aux;
    if(pos-2<0){
        addBeg(x,y);
        return;
    }
    new=(Node*) malloc (sizeof(Node));
    new->date=y;
    aux=START;
    for(i=0;i<pos-2;i++)
        aux=aux->link;
    new->link=aux->link;
    aux->link=new;
}


void printList(Head *x) {
   Node* aux;
   if (emptyList(x)){  
      printf("Empty List\n");
      return;
   }
   aux=START;
   while(aux!=NULL){
      printf("%d\n",aux->date);
      aux=aux->link;
   }
}

int removeBeg(Head* x){
    Node* aux;
    int elem;
    if(emptyList(x))
        return -1;
    aux=START;
    elem=aux->date;
    START=START->link;
    free(aux);
    return elem;
}

int removePos(Head* x, int pos){
    register int i,elem;
    Node* p,*aux;
    if(pos-2<0)
        return removeBeg(x);
    aux=START;
    for(i=0;i<pos-2;i++)
        aux=aux->link;
    p=aux->link;
    elem=p->date;
    aux->link=p->link;
    free(p);
    return elem;              
}

int search(Head* x, int elem){
    Node* aux=START;
    int i=0;
    while(aux!=NULL){
        i++;
        if(aux->date==elem)
            return i;
        else 
            aux=aux->link; 
    }
    return 0;
}

void merge(Head* x,Head* y){
    Node* aux=START;
    while(aux->link!=NULL)
        aux=aux->link;
    aux->link=y->start;
    y->start=NULL;
}

