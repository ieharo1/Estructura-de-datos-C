#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//DATO ABSTRACTO LLAMADO ARREGLO
typedef struct Arreglo{

        int NUMELEMS;
        float arr[5];
	} ARREGLO;

//
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
		//char subcad[30];
		//char a;
	} CADENA;

	CADENA MakeCadena(char o[30]) {
	    CADENA c;
	    int i=0, j;
	    for(i=0;i<=30;i++){
            c.cad[i]=o[i];
        }
	    return c;
	}
	CADENA SubCad(CADENA z, int a, int b){
	   int i=0, j;
         j=a;
	    char subcad[30];
	    for(i=0;i<=(b-a);i++){
	        subcad[i]=z.cad[j-1];
	        j=j+1;

	    }
         printf("Su subcadena es: %s \n", subcad);

	}
	CADENA RetCar (CADENA z, int w){
	    char a;
	    a= z.cad[w-1];
	    printf("El caracter que ha escogido es: %c \n", a);
	}
	CADENA ContCar (CADENA c){
	     CADENA z;
	     int x;
	     x=strlen(z.cad);
	     printf("Su oración posee: %d caracteres \n",x);
	}

int main()
{
    CADENA A;
    ARREGLO B;
    int a, b, w, c=5, i=0, e;
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

    A=MakeCadena(o);
    SubCad(A, a, b);
    ContCar(A);
    RetCar(A,w);


    printf("Ingrese %d datos \n",c);
    float d[c];

    for(i=0;i<c;i++){
        printf("Ingrese el elemento %d \n", i+1);
        scanf("%f", &c1);
        d[i]=c1;
    }

    B=MakeArr(d,c);
    floatpromedio(B);
    printf("Ingrese la posición del elemento que desea extraer \n");
    scanf("%d", &e);
    RetirarDatos(B, e);

    return 0;
}
