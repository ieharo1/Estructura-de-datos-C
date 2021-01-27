//Título: Búsqueda Secuencia

//Nombre del Estudiante:Isaac Haro

//Fecha del Trabajo: 9-9-2020
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()//Programa principal
{
    system("COLOR 8B");
    printf("Hola, Bienvenido a continuacion debera ingresar 10 digitos de los cuales buscara la posicion de 1 solo \n");
    int array1[10],q[10];
    Definiciodelarreglo(array1);
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
    int busq;
    for(int i=0;i<10;i++){
         if (array1[i] == encontrar) {
                    busq = i + 1;
                break; }
                else {
                    busq = -1; }
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

//Comentarios
/*El programa permite entender con facilidad el uso de funciones, ademas de que podemos usar los distintos tipos de solucion.
Podemos decir tambien que el codigo es de lo mas compacto con el fin de ahorrar lineas de codigo y que pese menos y su funcionamiento
sea el adecuado para el tipo de programa que se busca.*/
