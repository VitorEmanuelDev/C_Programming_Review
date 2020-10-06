/*
 ============================================================================
 Name        : string_12_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to check whether a string is palindrome or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];

	printf("Write a string:");
	gets(string);

	int size = 0;

	for(int current = 0; string[current] != '\0'; current++)
		size++;

	int notPalindrome = 0;
	int reverseCount = size - 1;

	for(int originalCount = 0; string[originalCount] != '\0'; originalCount++){

		if(string[originalCount] != string[reverseCount]){

			notPalindrome++;

		}

		reverseCount--;

	}

	if(notPalindrome == 0){

		printf("%s IS a palindrome.", string);

	}else{

		printf("%s IS NOT a palindrome.", string);

	}

}
