/*
 ============================================================================
 Name        : while_loop.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	int current = 0;

		while(arr[current] < 10){

			printf("%d ", arr[current]);

			current++;
		}

}
