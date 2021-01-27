#include <stdio.h>
#include <stdlib.h>
void IngresoArreglo(int Arr[]){
    int a;
    printf("Ingrese 10 valores \n");
    for(int i=0;i<10;i++){
        printf("Ingrese el valor %d \n",i+1);
        scanf("%d",&a );
        Arr[i]=a;
    }

}
int ValorABuscar(){
    int k;
    printf("Ingrese el valor que esta buscando  \n");
    scanf("%d",&k);
    return k;
}
int BusquedaValores(int Arr[], int k){
    int p=-1;
    for(int i=0;i<10;i++){
        if(Arr[i]==k){
            p=i+1;
        }

    }
    return p;
}
void IMPRIMIR(int p,int k){
    printf("La posicion del numero %d es %d\n",k,p);

}
int main()
{
    int b, c, d;
    int Arr[10];
    int a[10];
    IngresoArreglo(Arr);
    b=ValorABuscar();
   // printf("%d \n", b);
    c=BusquedaValores(Arr,b);
    //printf("%d \n", c);
    IMPRIMIR(c,b);
    return 0;
}
