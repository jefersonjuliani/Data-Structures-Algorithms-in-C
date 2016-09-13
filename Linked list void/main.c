#include"linkedlist.h"
#include<stdio.h>
int main(){
    Head* x,*y,*z,*j;
    
    x=creatList("int");
    y=creatList("char");
    z=creatList("double");
    j=creatList("string");
    
    int a=1,b=2,c=3;
    addBeg(x,&a);
    addBeg(x,&b);
    addBeg(x,&c);
    
    printList(x);  
    printf("-----------\n");
    
    char d='a',e='b',f='c';
    addBeg(y,&d);
    addBeg(y,&e);
    addBeg(y,&f);
    
    printList(y);
    printf("-----------\n");
    
    double g=2.34,h=3.45,i=4.43;
    addBeg(z,&g);
    addBeg(z,&h);
    addBeg(z,&i);
    
    printList(z);
    printf("-----------\n");
    
    char l[3]="ana",m[4]="test",n[3]="jef";
    addBeg(j,&l);
    addBeg(j,&m);
    addBeg(j,&n);
    
    printList(j);
    
    freeList(x);
    freeList(y);
    freeList(z);
    freeList(j);
    return 0;
}
