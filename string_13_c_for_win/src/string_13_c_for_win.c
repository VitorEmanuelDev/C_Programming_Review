/*
 ============================================================================
 Name        : string_13_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : program to reverse order of words in a given string
 Playlist    : https://www.youtube.com/watch?v=yq3TbJB3IMs
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define SIZE 512

int main(void)
{
    char string[SIZE];
    char wordReverse[SIZE];

    printf("Write a string:");
    gets(string);

    int size = 0;

    for(int current = 0; string[current] != '\0'; current++)
    	size++;// get the size of the string

    int newCount = 0;//the reversed array starts at 0
    int backwardsCount = size - 1;//character count starts at string size - 1 which excludes '\0'
    int wordSize = size - 1;

    while(backwardsCount > 0){//loop 1

		if(string[backwardsCount] == ' '){//if you find a space it means you just identified the end of a word

		    int wordChar = backwardsCount + 1;//go back to the last letter you counted

			while(wordChar <= wordSize){//current element is the first letter of the word you read in loop 1

				wordReverse[newCount] = string[wordChar];//input the last word by starting the count at it's first letter

				wordChar++;
				newCount++;

			}

			wordReverse[newCount++] = ' ';// hard code a space after inputing the last word
			wordSize = backwardsCount - 1;//to make sure we go back to the wordChar we were at before we entered loop 2

		}

		backwardsCount--;//keep counting backwards from ' '

    }

    for(int current = 0; current <= wordSize; current++){//input the last word

        wordReverse[newCount] = string[current];
        newCount++;

    }

    //make sure the string has a null at the end
    wordReverse[newCount] = '\0';


    puts(wordReverse);

}
