#!/bin/bash

gcc -c *.c #Arquivo com função principal
gcc -o teste linkedlist.o main.o #Cria o Ligador/executável
rm -r *.o
clear
./teste
