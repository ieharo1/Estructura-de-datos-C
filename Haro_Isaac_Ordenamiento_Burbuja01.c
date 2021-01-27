//Título: Búsqueda Secuencia

//Nombre del Estudiante:Isaac Haro

//Fecha del Trabajo: 15-9-2020
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()//Programa principal
{
    system("COLOR 8B");
    printf("Hola, Bienvenido a continuacion debera ingresar 10 digitos de los cuales buscara la posicion de 1 solo \n");
    int array1[10],q[10];
    Definiciodelarreglo(array1);
    Ordenamiento(array1);
    printf("Los datos en orden son: ");
    ImpArreglo(array1);
    int a=Encontrarelvalor(),z=Busquedadeldigito(array1,a);
    Impresion(z,a);

    return 0;
    getch();
}
int Encontrarelvalor(){//Funcion para buscar el valor
    int encontrar;
    printf("Introdusca el digito a buscar  \n");
    scanf("%d",&encontrar);
    return encontrar;
}
int Busquedadeldigito(int array1[], int encontrar){//Funcion para la busqueda de valores
    int busq=-1;
    for(int i=0;i<10;i++){
        if(encontrar==array1[i])
            busq=i+1;
    }
    return busq;
}
void Impresion(int busq,int encontrar){//Funcion para imprimir, no retorna valores
    printf("El digito a encontrar es %d y la posicion de busqueda es %d\n",encontrar,busq);
}
void Definiciodelarreglo(int array1[]){//Funcion para el ingreso de arreglos
    int valor;
    for(int i=0;i<10;i++){
        printf("Introdusca el digito numero %d \n",i+1);
        scanf("%d",&valor );
        array1[i]=valor;
    }
}
void Ordenamiento(int array1[]){//Funcion para ordenar los datos
    int L;
    for(int i=0; i<10-1;i++){
        for(int j=0;j<10-1;j++){
            if(array1[j]>array1[j+1]){
                L= array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=L;
            }
        }
    }
}
void ImpArreglo(int array1[]){//Funcion para imprimir un arreglo
    int L;
    for(int j=0; j<10;j++){
        printf("La posición %d : %d \n",j+1,array1[j]);
    }
}

//Comentarios
/*El programa permite entender con facilidad el uso de funciones, ademas de que podemos usar los distintos tipos de solucion.
Podemos decir tambien que el codigo es de lo mas compacto con el fin de ahorrar lineas de codigo y que pese menos y su funcionamiento
sea el adecuado para el tipo de programa que se busca.*/
