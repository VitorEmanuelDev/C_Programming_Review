/*
 ============================================================================
 Name        : simple_pointer.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Simple program for pointers
 ============================================================================
 */

#include <stdio.h>

int main(void){

    int number = 9; //actual variable
    int *pointer; //variable that's going to point to an address
    pointer = &number;// address of number being stored into pointer

    printf("\nAddress of number variable = %p", &number);

    printf("\nAddress of pointer = %p", pointer);

    printf("\nPointer showing value of the address that it stored = %d", *pointer);

}
