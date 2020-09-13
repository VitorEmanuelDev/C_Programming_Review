/*
 ============================================================================
 Name        : fgets_function.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Program to review fgets()
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	char string[SIZE];

	printf("Type anything:");
	fgets(string, SIZE, stdin);
	printf("%s", string);
}
