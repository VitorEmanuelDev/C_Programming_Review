/*
 ============================================================================
 Name        : user_input.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Program to show integer input from the user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	printf("Type a number and some letters:");

	scanf("%d", &number);

	printf("%d", number);


}
