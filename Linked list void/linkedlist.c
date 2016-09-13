#include "linkedlist.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define START (x->start)


Head* creatList(char type[6]){
    Head* x=(Head*) malloc(sizeof(Head));
    strcpy(x->type,type);
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

void addBeg(Head* x, void* y){
   Node* new =(Node*) malloc (sizeof(Node));
   new->date=y;
   new->link=START;
   x->start=new;
    
}

void addEnd(Head* x, void* y){
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
void addPos(Head* x, void* y, int pos){
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
   if(!strcmp(x->type,"int")){
        while(aux!=NULL){
            printf("%d\n",*((int*)(aux->date)));
            aux=aux->link;
        }
   }
   else if(!strcmp(x->type,"double")){
        while(aux!=NULL){
            printf("%lf\n",*((double*)(aux->date)));
            aux=aux->link;
        }
   }
   else if(!strcmp(x->type,"float")){
        while(aux!=NULL){
            printf("%f\n",*((float*)(aux->date)));
            aux=aux->link;
        }
   }
   else if(!strcmp(x->type,"char")){
        while(aux!=NULL){
            printf("%c\n",*((char*)(aux->date)));
            aux=aux->link;
        }
   }
   else if(!strcmp(x->type,"string")){
        while(aux!=NULL){
            printf("%s\n",((char*)(aux->date)));
            aux=aux->link;
        }
   }
   
}


void merge(Head* x,Head* y){
    Node* aux=START;
    while(aux->link!=NULL)
        aux=aux->link;
    aux->link=y->start;
    y->start=NULL;
}

