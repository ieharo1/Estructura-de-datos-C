//AQUI SU DOCUMENTACIONE
//NOMBRE DE PROGRAMA
//NOMBRE DEL ESTUDIANTE
//CURSO
//PARALELO
//FECHA
//PROPOSITO DE ULTIMA MODIFICACION
// FECHA ULTIMA MODIFICACION

#include<stdio.h>

//DECLARACIONES
#define NUMERO_ELEMENTOS 10
int Arreglo[NUMERO_ELEMENTOS];

//FUNCIONES

//NOMBRE DE FUNCION
//PROPOSITO DE FUNCION
void InicializaArreglo(int Arreglo_Temporal[], int n)
{
Arreglo_Temporal[0]=8;
Arreglo_Temporal[1]=2;
Arreglo_Temporal[2]=5;
Arreglo_Temporal[3]=7;
Arreglo_Temporal[4]=9;
Arreglo_Temporal[5]=1;
Arreglo_Temporal[6]=3;
Arreglo_Temporal[7]=7;
Arreglo_Temporal[8]=8;
Arreglo_Temporal[9]=1;

return;
}

//NOMBRE DE FUNCION
//PROPOSITO DE FUNCION
void ImprimeArreglo(int ArregloTemporal[], int n)
{
    int Elemento;

    for (Elemento=0;Elemento<10;Elemento++)
        {
            printf("%d\n", ArregloTemporal[Elemento]);
        }
    return;
}

//NOMBRE DE FUNCION
//PROPOSITO DE FUNCION
void Burbuja (int x[], int n)
{
    int Temporal, j, pass;
    int Intercambio = 1;

    for (pass=0; pass<n-1;pass++)
    {
        Intercambio=0;
        for(j=0;j<n-pass-1;j++)
        {
            if(x[j]>x[j+1])
            {
                Intercambio=1;
                Temporal=x[j];
                x[j]=x[j+1];
                x[j+1]=Temporal;
            }
        }
    }
    return;
}

//FUNCION PRINCIPAL
void main(void)
{
    InicializaArreglo(Arreglo, NUMERO_ELEMENTOS);

    printf("Arreglo inicial\n");
    ImprimeArreglo(Arreglo, NUMERO_ELEMENTOS);
    Burbuja(Arreglo, NUMERO_ELEMENTOS);
    printf ("Arreglo Ordenado\n");
    ImprimeArreglo(Arreglo, NUMERO_ELEMENTOS);
}
