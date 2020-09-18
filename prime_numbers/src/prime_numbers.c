/*
 ============================================================================
 Name        : prime_numbers.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Find prime numbers within a range
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit;

	printf("Type a limit:");
	scanf("%d", &limit);

	for(int current = 2; current <= limit; current++){

		int count = 0;

		for(int test = 2; test <= current; test++){

			if(current % test == 0){

				count++;

				if(count > 1){

					break;

				}

				if (current == test){

					printf("%d ", current);

				}

			}

		}

	}

}
