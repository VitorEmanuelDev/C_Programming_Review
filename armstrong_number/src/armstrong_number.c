/*
 ============================================================================
 Name        : armstrong_number.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : check if a number is an armstrong number
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
		//sum += pow(remainder, 3);//not working. I needed to ink with the math library
		sum += remainder * remainder * remainder;
		digits = digits / 10;

	}

	if(sum == number){

		printf("%d is an armstrong number.", number);

	}else{

		printf("%d is not an armstrong number.", number);

	}

}
