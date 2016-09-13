#!/bin/bash

gcc -c *.c #Arquivo com função principal
gcc -o teste list.o main.o #Cria o Ligador/executável
rm -r list.o && main.o
clear
./teste
