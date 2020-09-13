/*
 ============================================================================
 Name        : switch_case.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Review of the switch case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char character;

	printf("Type a character:");
	scanf("%c", &character);

	switch(character){

	case '8':
	            printf("Go up\n");
	            break;
	case '2':
		            printf("Go down\n");
		            break;
	case '4':
		            printf("Go left\n");
		            break;
	case '6':
		            printf("Go right\n");
		            break;
	case '5':
		            printf("Shoot\n");
		            break;

	default :
		            printf("wtf?\n");
		            break;

	}

}
