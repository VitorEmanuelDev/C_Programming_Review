/*
 ============================================================================
 Name        : factors.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find the sum of n numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	int sum = 0;

	printf("Type a number:");
	scanf("%d", &number);

	int current = 0;

	while(current <= number){

		sum += current;

		current++;

	}

	printf("The sum is %d.", sum);

}
