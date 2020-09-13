/*
 ============================================================================
 Name        : palindrome.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : check if a number is a palindrome
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	int thousands;
	int hundreds;
	int dozens;
	int digit;

	printf("Type a number:");
	scanf("%d", &number);

	if(number < 0 && number > 10000){

		printf("Invalid number.");

	}else{

			thousands = number / 1000;
			hundreds = (number / 100 ) % 10;
			dozens = (number / 10) % 10;
			digit = number % 10;

	}

	if (thousands == digit && hundreds == dozens){

		printf("Is a palindrome");

	}else{

		printf("Not a palindrome");

	}

}
