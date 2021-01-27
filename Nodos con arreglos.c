#include<stdio.h>
#include <stdlib.h>
typedef struct NODO{
int dato;
struct NODO*siguiente;
}NODO;
NODO* primero=NULL;
void Push(){
    printf ("Ingrese el dato que contendra el nuevo nodo:");
    NODO* nuevo=(NODO*)malloc(sizeof(NODO));
    scanf("%d", &nuevo->dato);
    nuevo->siguiente=primero;
    primero=nuevo;
}
void Pop(int c){
int cont=0;
NODO* actual= (NODO*)malloc(sizeof(NODO));
actual = primero;
if(primero!=NULL){
    while(actual!=NULL){
        printf("%d", actual->dato);
        if(cont!=(c-1)){
            printf(",");
        }
        actual=actual->siguiente;
        cont++;
    }
}
else
    printf("La pila se encuentra vacia");
}
void Retirar(){
NODO*aux =(NODO*)malloc(sizeof(NODO));
aux=primero;
printf("%d \n",aux->dato);
aux=primero->siguiente;
primero=NULL;
primero=aux;
}
int main(){
int c,b;
printf("Cuantos datos desea ingresar?");
scanf("%d",&c);
for(int i=0;i<c;i++){
    Push();
}
printf("Cuantos datos desea retirar?");
scanf("%d",&b);
for(int z=0;z<b;z++){
    Retirar();
}
Pop(c);
return 0;
}
