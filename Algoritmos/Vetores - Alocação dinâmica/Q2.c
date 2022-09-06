#include <stdio.h>
#include <stdlib.h>

int main(){
	//declaração de variáveis
	int alunos;
	float *notas;
	float media = 0;
	int i;
	
	notas = (float*)malloc(alunos*sizeof(float));  //alocando dinamincamente
	
	if(notas == NULL){  //verificando se tem mem?ria suficiente
		printf("memoria insuficiente!\n");
		exit(1);  //encerrando o programa
	}
	
	printf("Informe a quantidade de alunos: \n");
	scanf("%d", &alunos);  //lendo a quantidade de alunos
	
	for(i = 0; i < alunos; i++){  //percorrendo o vetor
		scanf("%f", &notas[i]);  //lendo as notas
		
		media = media + notas[i];  //somando com as notas
		media = media/alunos;   //dividindo com a quantidade de alunos informados
	}
	
	printf("Media: %.1f", media);  //imprimindo a média
	
	free(notas);  //liberando a memória
	
	return 0;
}