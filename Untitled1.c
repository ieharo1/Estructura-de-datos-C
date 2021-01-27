#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

typedef struct Arreglo{
        int NUMELEMS;
        float arr[5];
	} ARREGLO;

	ARREGLO MakeArr(float a[],int n){
	    ARREGLO c;
	    int i=0;

	    for(i=0;i<n;i++){
            c.arr[i]=a[i];


        }
	    c.NUMELEMS=n;
	    return c;
	}
	ARREGLO floatpromedio(ARREGLO z){
        int i=0;
        float div, sum=0;
        for(i=0;i<z.NUMELEMS;i++){
        sum=sum+z.arr[i];

        }

        div=sum/z.NUMELEMS;
        printf("El promedio de su arreglo es: %f \n", div);

	}

	ARREGLO RetirarDatos (ARREGLO b, int a){
	    printf("El valor que ha escogido es: %f \n ", b.arr[a-1]);
	}


typedef struct Cadena{
		char cad[30]; //="hola papi \0";
		char subcad[30];
		char a;
	} CADENA;

	CADENA MakeCadena(char o[30] ,int a,int b, int w) {
	    CADENA c;
	    int i=0, j;
	    for(i=0;i<=30;i++){
            c.cad[i]=o[i];
        }
	    i=0;
	    j=a;
	    for(i=0;i<=(b-a);i++){
	        c.subcad[i]=o[j-1];
	        j=j+1;
	    }

	    c.a= c.cad[w-1];
	    return c;
	}
	CADENA ContCar (CADENA c){
	     CADENA z;
	     int x;
	     x=strlen(z.cad);
	     printf("Su oración posee: %d caracteres \n",x);
	}
	CADENA PrintDat (CADENA c){

	     //printf("Su oracion es: %s \n",c.cad);
	     printf("Su subcadena es: %s \n",c.subcad);
	     printf("El caracter que ha escogido es: %c \n",c.a);


	}

int main()
{
    CADENA A;
    ARREGLO B;
    int a, b, w, c, i=0, e;
    float c1;
    char o[30];

    printf("Ingrese una oración \n");
    gets(o);
    printf("Ingrese la posición en la que desea iniciar su subcadena \n");
    scanf("%d",&a);
    printf("Ingrese la posición en la que desea terminar su subcadena \n");
    scanf("%d",&b);
    printf("Ingrese la posición del caracter que desea obtener \n");
    scanf("%d",&w);

    A=MakeCadena(o,a,b,w);
    ContCar(A);
    PrintDat(A);

    printf("¿Cuántos números desea ingresar? \n");

    scanf("%d",&c);
    float d[c];

    for(i=0;i<c;i++){
        printf("Ingrese el elemento %d \n", i+1);
        scanf("%f", &c1);
        d[i]=c1;
        //printf("%f \n", d[i]);
    }

    B=MakeArr(d,c);
    floatpromedio(B);
    printf("Ingrese la posición del elemento que desea extraer \n");
    scanf("%d", &e);
    RetirarDatos(B, e);

    return 0;
}
