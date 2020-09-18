/*
 ============================================================================
 Name        : multiplication_table.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : multiplication software
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	printf("Type a number:");
	scanf("%d", &number);

	int product;
	int current = 1;

	while(current <= number + 1){

		product = current * number;
		printf("%d x %d = %d\n", number, current, product);

		current++;

	}

}
