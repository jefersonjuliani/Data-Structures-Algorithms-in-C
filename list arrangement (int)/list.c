#include"list.h"
#include<stdlib.h>
#include<stdio.h>
//ok
List* creatList(){
    List* li;
    li = (List*) malloc(sizeof(List));
    if(li!=NULL){
        li->p=0;
    }
    return li;
}
//ok
int fullist(List* x){
    if(x->p<MAX-1 && x!=NULL)
        return TRUE;
    return FALSE;
}
//ok
void move(List* x,int pos){
    int i;
    for(i=pos;i<x->p;i++)
        x->item[i]=x->item[i+1];
    x->p--;
}

//ok
int addEnd(List* x,int y){
    if(fullist(x)){
        x->item[x->p]=y;
        x->p++;
        return TRUE;
    }
    return FALSE;
}
//ok
int addStart(List* x,int y){
    if(fullist(x)){
        int i;
        if(x->p>0){
        for(i=x->p-1;i>=0;i--)
            x->item[i+1]=x->item[i];
        }
        x->item[0]=y;
        x->p++;        
        return TRUE;
    }
    return FALSE;
}
//ok
int addSort(List* x,int y){
    if(fullist(x)){
        int i=0,j;
        if(x->p>0){
            while(i<x->p && x->item[i]<y)
                i++;
            for(j=x->p;j>=i;j--)
                x->item[j+1]=x->item[j];
        
        }
        x->item[i]=y;
        x->p++;
        return TRUE;
    }
    return FALSE;
}
//ok
void freelist(List* x){
    free(x);
    x=NULL;
}
//ok
void printList(List* x){
    int i;
    printf("Position  |");
    for(i=0;i<x->p;i++)
        printf("%d|",i); 
    printf("\n");
    printf("List      |");
    for(i=0;i<x->p;i++)
        printf("%d|",x->item[i]);    
    printf("\n");
}
//ok
int removeElem(List* x, int elem){
    int i,hack=FALSE;
    for(i=0;i<=x->p;i++)
        if(elem==x->item[i]){
            hack=TRUE;
            break;   
        }
    if(hack){
        move(x,i);
        return TRUE;
    }
    return FALSE;
}
int position(List* x,int elem){
    int j;
    for(j=0;j<=x->p;j++){
        if(x->item[j]==elem)
            return j;
    }
    return -1;
}
