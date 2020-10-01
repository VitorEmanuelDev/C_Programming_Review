/*
 ============================================================================
 Name        : questao_02.c
 Author      :
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 512

int main(void) {

	int i, j;
	int subs = 0;
	int contagem = 0;
	float divisor;
	float parente;

	char str1[MAX] = "GATTACTGAGTCA";
	char str2[MAX] = "CATACAGT";

	/*printf("Informe a primeira string: ");
	scanf("%s", str1);*/

	/*printf("Informe a segunda string: ");
	scanf("%s", str2);*/

	int contador1 = 0, contador2 = 0;

	for(i=0; str1[i]!='\0'; i++){

		if(str1[i] >= 'a' && str1[i] <= 'z'){

			str1[i] -=  32;
			contador1++;

		}

		if(str2[i] >= 'a' && str2[i] <= 'z'){

			str2[i] -= 32;

			contador2++;

		}

	}

	if(contador1 > contador2){

		divisor = contador2;

	}

	if(contador1 < contador2){

		divisor = contador1;

	}




	for(i=0; str1[i]!= '\0'; i++){

		printf("%c", str1[i]);

	}

	printf("\n");

	for(i=0; str2[i]!= '\0'; i++){

		printf("%c", str2[i]);

	}

	printf("\n");


	for(i=0, j=0; i < MAX || j < MAX; i++, j++){


		if(str1[i] == str2[j]){

			subs++;
			contagem = subs;
			parente = contagem / divisor;


			if(parente >= 0.62){

				printf("São parentes %f", parente);
				exit(0);

			}

		}


		if(str1[i] != str2[j]){

			subs = 0;

		}


	//printf("%c", str1[i]);

	str1[contador1] = str1[i];
	contador1++;
	str2[contador1] = str2[j];
	contador2++;

	}

	printf("Não são parentes %f", parente);

}
