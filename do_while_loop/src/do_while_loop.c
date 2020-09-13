/*
 ============================================================================
 Name        : do_while_loop.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : do while loop review
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	int current = 0;

		do{

			printf("%d ", arr[current]);

			current++;

		}while(arr[current] < 10);

}
