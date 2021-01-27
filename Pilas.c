#include <stdio.h>
#include <stdlib.h>
typedef struct NODO{
    int dato;
    struct NODO* siguiente;
}NODO;

NODO* primero=NULL;

void InsertarNodo(){
    printf ("Ingrese el dato que contendra el nuevo nodo: ");
    NODO* nuevo=(NODO*)malloc(sizeof(NODO));
    scanf("%d", &nuevo->dato);
    nuevo->siguiente=primero;
    primero=nuevo;
}
void DesplegarPila (int c){
    int cont=0;
    NODO* actual= (NODO*) malloc(sizeof(NODO));
    actual = primero;
    if (primero!= NULL){
        while(actual!=NULL){
            printf("%d", actual->dato);
            if(cont!=(c-1)){
                printf(",");
            }
            actual = actual -> siguiente;
            cont++;
        }
    }
    else
        printf("La pila se encuentra vacia");

}
int main()
{
    int c;
    printf("¿Cuántos datos desea ingresar?");
    scanf("%d", &c);
    for(int i=0;i<c;i++){
        InsertarNodo();
    }
    DesplegarPila(c);
    return 0;
}
