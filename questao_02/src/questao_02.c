#include<stdio.h>
#define TAM 30

struct colonia {
char nome[TAM];
int sobrevida;
int divisoes;
};

int main(void){

int i;
int j;

printf("Cadastre as leveduras do catálogo:\n");
scanf("%d",&j);

struct colonia levedura[j];

for(i=0; i<j; i++){
	printf("Nome:");
	scanf("%s",levedura[i].nome);
	printf("Divisoes:");
	scanf("%d",&levedura[i].divisoes);
	printf("Sobrevida:");
	scanf("%d",&levedura[i].sobrevida);
}

int sobrevidaMax = 0;
int x=0;

for(i=0; i<j; i++){
	int prodColonia = 1;
	for(int j=0; j<(levedura[i].sobrevida-1); j++){
	prodColonia =prodColonia *levedura[i].divisoes;
}

if(prodColonia > sobrevidaMax) {
	sobrevidaMax = prodColonia;
	x = i;
}

}


	printf("\nMelhor colonia: %s\n", levedura[x].nome);

}
