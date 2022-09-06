#include <stdio.h>
#include <stdlib.h>

int **soma_vetor_ponteiros(int **A, int **B){ //função soma
    int i, j;
    int **C; //criando uma nova variavél para receber a soma
    C = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){ 
        C[i] = (int*)malloc(3*sizeof(int));
    }
    for(i = 0; i < 3; i++){ //realização a soma
        for(j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j]; //C[4][6] = A[1][2] + B[3][4];
        }
    }

    printf("\nSOMA \n"); //imprimindo a matriz para o usuário
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("| ");
        for(j = 0;j < 3; j++){ //percorre a coluna
      
        printf("%d | ", C[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){ //liberando a memória alocada
        free(C[i]);
    }
    free(C); 

    return C; //retorna C para o usuário
}

int **sub_vetor_ponteiros(int **A, int **B){ //função para subtração
    int i, j;
    int **D; //criando uma nova variavél para receber a subtração
    D = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){
        D[i] = (int*)malloc(3*sizeof(int));
    }
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

    for(i = 0; i < 3; i++){ //liberando a memória alocada
        free(D[i]);
    }
    free(D);

    return D; //retorna D para o usuário
}

int **mult_vetor_ponteiros(int **A, int **B){ //função para multiplicação
    int i, j, k, aux;
    int **E; //criando uma nova variavél para receber a multiplicação
    E = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){
        E[i] = (int*)malloc(3*sizeof(int));
    }
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){ //multiplica os elementos da linha de 'A' pela coluna de 'B' e faz a soma
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

    for(i = 0; i < 3; i++){ //liberando a memória alocada
        free(E[i]);
    }
    free(E); //retorna E para o usuário

    return E;
}

int main(void){
    int i, j; 
    
    int **A, **B; //matrizes dinâmicas 

    A = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente
    for(i = 0; i < 3; i++){
        A[i] = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i < 3; i++){ //recebe do usuário o valor de cada elemento da matriz A
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz A: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    B = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente
    for(i = 0; i < 3; i++){
        B[i] = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i < 3; i++){ //recebe do usuário o valor de cada elemento da matriz B
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz B: ", i, j); 
            scanf("%d", &B[i][j]);
        }
    }

    soma_vetor_ponteiros(A, B); //chamando a função soma
    sub_vetor_ponteiros(A, B); //chamando a função subtração
    mult_vetor_ponteiros(A, B); //chamando a função multiplicação

    for(i = 0; i < 3; i++){ //liberando a matriz de A
        free(A[i]);
    }
    free(A);

    for(i = 0; i < 3; i++){ //liberando a matriz de B
        free(B[i]);
    }
    free(B);

    return 0;
}