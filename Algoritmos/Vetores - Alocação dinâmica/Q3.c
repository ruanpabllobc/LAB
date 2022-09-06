#include <stdio.h>
#include <stdlib.h>

void preenche_ordenado(int n, int *v){  //fun��o para preencher o vetor e ordenar
	//declara��o de vari�veis
	int i, j;
	int temp;

	printf("Informe a quantidade de numeros do vetor: \n");
	scanf("%d", &n);  //lendo a quantidade de numeros do vetor
	
	for(i = 0; i < n; i++){  //percorrendo o vetor
		scanf("%d", &v[i]);  //lendo os numeros
	}
	
	for(i = 0; i < n - 1; i++){  //percorrendo
        for(j = i; j < n - 1; j++){  //percorrendo
            if(v[i] > v[j]){  //se a variavel na posi��o 'i' for maior que o da posi��o 'j'
                temp = v[i];  //variavel temp recebe o valor da posi��o 'i'
                v[i] = v[j];  //variavel da posi��o 'i' recebe o valor da posi��o 'j'	
                v[j] = temp;  //variavel da posi��o 'j' recebe a variavel temp
            }
        }
    }
    
    for(i = 0; i < n; i++){  //percorrendo o vetor
		printf("%d\n", v[i]);  //imprimindo em ordem crescente
	}
}

int main(){
	
	int *vetor, num;  //variaveis

	vetor = (int*)malloc(num*sizeof(int));  //alocando dinamicamente
	
	if(vetor == NULL){  //se a variavel for igual a nulo
		printf("memoria insuficiente!\n");  //imprimindo mensagem
		exit(1);  //encerrando o programa
	}
	
	preenche_ordenado(num, &vetor);  //chamando a fun��o
	
	free(vetor); //liberando a memoria
	
	return 0;
}