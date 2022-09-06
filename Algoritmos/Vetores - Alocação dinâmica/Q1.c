#include <stdio.h>
#include <stdlib.h>

int main(){
	//declaração de variáveis
	int *vetor;
	int i, N;
	int maior = 0;
	int menor;
	
	vetor = (int*)malloc(N*sizeof(int)); //alocando dinamicante na memória
	
	if(vetor == NULL){  //verificando se tem memória suficiente para a alocação
		printf("memoria insuficiente\n");
		exit(1);  //encerrando o programa
	}
	
	printf("Informe a quantidade de numeros do vetor: \n");
	scanf("%d", &N);  //lendo a quantidade de números
	
	for(i = 0; i < N; i++){  //percorrendo o vetor
		scanf("%d", &vetor[i]);  //lendo os números do vetor
		
		if(vetor[i] > maior){  //se o número for maior que a variável maior
		   	maior = vetor[i]; //a variável recebe o número	
		}
		if(vetor[i] < menor){ //se o número for menor que a variável menor
			menor = vetor[i]; //a variável recebe o número	
		}
	}
	
	printf("Maior: %d\n", maior);  //imprimindo o maior número
	printf("Menor: %d\n", menor); //imprimindo o menor número
	
	free(vetor); //liberando a memória
		
	return 0;
}