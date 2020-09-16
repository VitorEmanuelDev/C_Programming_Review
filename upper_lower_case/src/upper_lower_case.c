/*
 ============================================================================
 Name        : swap_numbers.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	char string[SIZE];

	printf("Type a string:");
	fgets(string, SIZE, stdin);

	printf("Upper to lowercase:");

	int current = 0;

	while(string[current] != '\0'){

		if(string[current] >= 'A' && string[current] <= 'Z'){

			string[current] += 32;

		}

		current++;

	}

	for(int current = 0; string[current] != '\0'; current++){

		printf("%c", string[current]);

	}

	printf("Lower to uppercase:");

	current = 0;

	while(string[current] != '\0'){

		if(string[current] >= 'a' && string[current] <= 'z'){

			string[current] -= 32;

		}

		current++;

	}

	for(int current = 0; string[current] != '\0'; current++){

		printf("%c", string[current]);

	}


}
