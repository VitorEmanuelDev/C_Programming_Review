/*
 ============================================================================
 Name        : armstrong_number.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : check if a number is an armstrong number
 https://www.eclipse.org/forums/index.php?t=msg&th=68204/
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int number;
	int remainder;
	int sum = 0;
	int digits;

	printf("Type a number:");
	scanf("%d", &number);

	digits = number;

	while(digits > 0){

		remainder = digits % 10;
		sum += pow(remainder, 3);//https://www.eclipse.org/forums/index.php?t=msg&th=68204/
		digits = digits / 10;

	}

	if(sum == number){

		printf("%d is an armstrong number.", number);

	}else{

		printf("%d is not an armstrong number.", number);

	}

}
