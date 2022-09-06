#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, tam, soma = 0, total;
	
	printf("Informe as dimensoes da matriz \n");
	scanf("%d", &tam); //recebe do usuário dimensões da matriz

	int mat[tam][tam]; //tamanho a ser informado pelo usuário

	printf("Atribua o valor de cada posicao da matriz \n");

	for(i=0;i<tam;i++){ //percorrendo a matriz para atribuir valores
        for(j=0;j<tam;j++){
            scanf("%d", &mat[i][j]);
		}
    }

	printf("\n");

    for(i=0;i<tam;i++){ //somando a diagonal principal
        soma += mat[i][i]; //[0][0], [1][1], [2][2]...
    }
    printf("Diagonal principal %d\n", soma);
    total = soma; //salva a soma da diagonal principal na variável total

    soma = 0; //atribuindo 0 novamente ao conteudo da variavel para reutilização
    for(i=0;i<tam;i++){ //somando a diagonal secundária
        soma += mat[i][tam - 1 - i]; //...[0][3 - 1 - 0 = 2], [0][3 - 1 - 1 = 1], [0][3 - 1 - 2 = 0]
    }
    printf("Diagonal secundaria: %d\n", soma);

    if(total != soma){
        printf("A matriz nao eh um quadrado magico \n"); //validação da diagonal secundária
	}

    for(i=0;i<tam;i++){ //somando cada linha
        soma = 0; //atribuindo 0 novamente ao conteudo da variavel para reutilização
        for(j=0;j<tam;j++){
            soma += mat[i][j]; //[0][0], [0][1], [0][2], [0][3]...
		}

        if(total != soma){ //validação das linhas
            printf("A matriz nao eh um quadrado magico \n");
        }else{
			printf("Soma da linha [%d]: %d\n", i+1, soma); //imprimindo resultado
		}
    }

    for(j=0;j<tam;j++){ //somando cada coluna
        soma = 0; //atribuindo 0 novamente ao conteudo da variavel para reutilização
        for(i=0;i<tam;i++){
            soma += mat[i][j]; //[0][0], [1][0], [2][0], [3][0]...
		}
        if(total != soma){ //validação das colunas
            printf("A matriz nao eh um quadrado magico \n");
        }else{
			printf("Soma da coluna [%d]: %d\n", j+1, soma); //imprimindo resultado
		}
    }

    if(total == soma){ //resultado final
            printf("\nA matriz eh um quadrado magico \n");
        }

    return 0;
}