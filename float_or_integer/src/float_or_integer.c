/*
 ============================================================================
 Name        : float_or_integer.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find out if a number is of type float or of type integer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void) {

	char number[SIZE];

	printf("Type a number:");
	fgets(number, SIZE, stdin);

	int type = 1;//type = 1 corresponds to integer types
	int current = 0;

	while(number[current] != '\0'){

		if(number[current] == '.' || number[current] == ','){

			type = 0;

		}

		current++;

	}

	if(type == 1){

		printf("%s is an integer number.", number);

	}

	if(type == 0){

		printf("%s is a float number.", number);

	}

}
