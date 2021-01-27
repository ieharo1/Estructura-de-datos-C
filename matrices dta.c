#include <stdio.h>
#include <stdlib.h>
typedef struct Matriz{
    int dim[3][3];
}MATRIZ;

MATRIZ Makematriz(int arr[3][3]){
    MATRIZ c;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             c.dim[i][j]= arr[i][j];
        }
    }
    return c;
}

MATRIZ Suma(MATRIZ a, MATRIZ b){
    MATRIZ Z;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             Z.dim[i][j] = a.dim[i][j]+b.dim[i][j];
        }
    }
    return Z;
}
MATRIZ Resta(MATRIZ a, MATRIZ b){
     MATRIZ Z;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             Z.dim[i][j] = a.dim[i][j]-b.dim[i][j];
        }
    }
    return Z;
}
MATRIZ Imprimir(MATRIZ P){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                if(j==0){
                    printf("| %d",P.dim[i][j]);
                }
                else if(j==2){
                    printf(" %d |",P.dim[i][j]);
                }
                else{
                    printf(" %d",P.dim[i][j]);
                }
        }
        printf("\n");
    }
}
MATRIZ Multiplicacion(MATRIZ O,MATRIZ U){
     MATRIZ Z;
     int r=0;
    for(int i=0; i<3; i++){

            for(int m=0;m<3;m++){

                for(int j=0; j<3; j++){
                r+=O.dim[i][j]*U.dim[j][m];
                 }

                Z.dim[i][m]=r;
                r=0;
            }
    }
    return Z;
}
int main()
{
    MATRIZ A;
    MATRIZ B;
    int mata[3][3];
    printf("MATRIZ A \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             printf("Ingrese el dato de la fila %d y la columna %d \n",i+1,j+1);
             scanf("%d", &mata[i][j]);
        }
    }
    printf("MATRIZ B \n");
    int mata1[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             printf("Ingrese el dato de la fila %d y la columna %d \n",i+1,j+1);
             scanf("%d", &mata1[i][j]);
        }
    }
    A=Makematriz(mata);
    B=Makematriz(mata1);
    printf("MATRIZ SUMA \n");
    Imprimir(Suma(A,B));
    printf("\nMATRIZ RESTA \n");
    Imprimir(Resta(A,B));
    printf("\nMATRIZ MULTIPLICACIÓN \n");
    Imprimir(Multiplicacion(A,B));
    return 0;
}
