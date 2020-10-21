#include<stdio.h>

int main(){

int i,j,N;
int linha;
int coluna;
int maiorL=1;
int maiorC=1;

printf("Quantas linhas e colunas?\n");
scanf("%d",&N);

int matriz[N][N];

printf("Cadastre os elementos da matriz:\n");

for( i=0; i<N; i++){
 for( j=0; j<N; j++){

    scanf("%d",&matriz[i] [j]);
 }
}

for(i=0; i<N; i++) {
	linha=0;
	coluna=0;

  for(j=0; j<N; j++){

   linha += matriz[i][j];

   coluna += matriz[j][i];


}

	if(linha > 1 || linha < 1) {

		maiorL=0;

	}

	if(coluna > 1 || coluna < 1) {

		maiorC=0;
	}

 }

  if(maiorC ==0 || maiorL == 0) {

	 printf("Nao faz permutação:");

  }

  if(maiorC ==1 || maiorL == 1)  {

	 printf("A matriz faz permutação:");

 }

}
