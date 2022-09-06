#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int A[3][3], int B[3][3]){ //função soma
    int i, j;
    int C[3][3]; //criando uma nova variavél para receber a soma

    for(i = 0; i < 3; i++){ //realização a soma
        for(j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j]; //C[4][6] = A[1][2] + B[3][4];
        }
    }

    printf("\nSOMA \n");  //imprimindo a matriz para o usuário
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("| ");
        for(j = 0;j < 3; j++){ //percorre a coluna
      
        printf("%d | ", C[i][j]);
        }
        printf("\n");
    }

    return C; //retorna C para o usuário
}

int sub_vetor(int A[3][3], int B[3][3]){ //função para subtração
    int i, j;
    int D[3][3]; //criando uma nova variavél para receber a soma

    for(i = 0; i < 3; i++){ //realização a subtração
        for(j = 0; j < 3; j++){
            D[i][j] = A[i][j] - B[i][j]; //D[2][2] = A[3][4] - B[1][2]
        }
    }

    printf("\nSUBTRACAO \n"); //imprimindo a matriz para o usuário
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d | ", D[i][j]);
        }
        printf("\n");
    }

    return D; //retorna D para o usuário
}

int mult_vetor(int A[3][3], int B[3][3]){ //função para multiplicação
    int i, j, k, aux;
    int E[3][3];
  
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){ 
            for(k = 0; k < 3; k++){ //multiplica a linha de 'A' pela coluna de 'B' e faz a soma
                aux = aux + (A[i][k] * B[k][j]);
        }
        E[i][j] = aux;
        aux = 0;
        }
    }

    printf("\nMULTIPLICACAO \n");
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d | ", E[i][j]);
        }
        printf("\n");
    }

    return E; //retorna E para o usuário
}

int main(void){
    int i, j; 
    
    int A[3][3], B[3][3]; //matrizes

    for(i = 0; i < 3; i++){ //recebe do usuário o valor de cada elemento da matriz A
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz A: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 3; i++){ //recebe do usuário o valor de cada elemento da matriz B
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz B: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    soma_vetor(&A, &B); //chamando a função soma
    sub_vetor(&A, &B); //chamando a função subtração
    mult_vetor(&A, &B); //chamando a função multiplicação

    return 0;
}