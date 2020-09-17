/*
 ============================================================================
 Name        : hexadecimal_to_decimal.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : hexadecimal to decimal conversion ex: 7DE = (7 * 16²) + (13 * 16¹) + (14 * 16⁰)
 solution to an IDE problem using pow():
 https://community.cypress.com/thread/56908
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 50

int main(){

	char hexadecimal[SIZE];
	char extractValue[SIZE] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	printf("Type a hexadecimal number:");
	fgets(hexadecimal, SIZE, stdin);

	//make sure the characters are all uppercase by manipulating ascii table values
	int current = 0;

	while(hexadecimal[current] != '\0'){

		if(hexadecimal[current] >= 'a' && hexadecimal[current] <= 'z'){

			hexadecimal[current] -= 32;

		}

		current++;

	}

	// find the exponent's value
	int exponent = 0;//gathering this value to use it on the pow function

	for(int current = 0; hexadecimal[current] != 0; current++, exponent++){

		printf("%c", hexadecimal[current]);

	}

	exponent -= 2;//take out the excess. if we don't we'll get a 0 and some garbage

	//loop to attribute an integer value to the char elements
	int decimal = 0;
	//for each element in the hexadecimal number
    for(int current = 0; hexadecimal[current] != 0; current++){

        //printf("%c", hexadecimal[current]);
    	//make a comparison to each element on the extractValue array
        for(int value = 0; value < 16; value++){

            //printf("%c", extractValue[value]);
        	// if the values compared match proceed with the conversion
            if(extractValue[value] == hexadecimal[current]){

	            decimal += value * pow(16, exponent);
	            exponent--;// take one out for the iterations to be like this => (value * 16²) + (value * 16¹) + (value * 16⁰)

	        }

         }

    }

	printf("%s corresponds to %d in decimal.", hexadecimal, decimal);

}
