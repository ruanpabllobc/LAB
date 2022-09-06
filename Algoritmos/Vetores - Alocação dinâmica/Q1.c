#include <stdio.h>
#include <stdlib.h>

int main(){
	//declara��o de vari�veis
	int *vetor;
	int i, N;
	int maior = 0;
	int menor;
	
	vetor = (int*)malloc(N*sizeof(int)); //alocando dinamicante na mem�ria
	
	if(vetor == NULL){  //verificando se tem mem�ria suficiente para a aloca��o
		printf("memoria insuficiente\n");
		exit(1);  //encerrando o programa
	}
	
	printf("Informe a quantidade de numeros do vetor: \n");
	scanf("%d", &N);  //lendo a quantidade de n�meros
	
	for(i = 0; i < N; i++){  //percorrendo o vetor
		scanf("%d", &vetor[i]);  //lendo os n�meros do vetor
		
		if(vetor[i] > maior){  //se o n�mero for maior que a vari�vel maior
		   	maior = vetor[i]; //a vari�vel recebe o n�mero	
		}
		if(vetor[i] < menor){ //se o n�mero for menor que a vari�vel menor
			menor = vetor[i]; //a vari�vel recebe o n�mero	
		}
	}
	
	printf("Maior: %d\n", maior);  //imprimindo o maior n�mero
	printf("Menor: %d\n", menor); //imprimindo o menor n�mero
	
	free(vetor); //liberando a mem�ria
		
	return 0;
}