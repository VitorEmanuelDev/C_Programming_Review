/*
 ============================================================================
 Name        : if_else.c
 Author      : vitor emanuel
 Version     :
 Copyright   :
 Description : Review if else control  flows
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int number;

	printf("Type a number from 0 to 10:");
	scanf("%d", &number);

	if(number > 10 || number < 0){

		printf("not a valid number");

	}else{

		printf("Your number is: %d", number);

	}

}
