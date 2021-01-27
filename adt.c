#include <stdio.h>
#include <stdlib.h>
//JACK NARVÁEZ
//INGENIERÍA EN SISTEMAS
//3ER NIVEL
//ESTRUCTURA DE DATOS

    typedef struct Rational{
		int numerador;
		int denominador;
	} RATIONAL;

	RATIONAL MakeRational (int a, int b)
	{
	if (b==0)
		{
			printf("El denominador no puede ser 0\n");
			return;
		}
	RATIONAL racional;
	racional.numerador = a;
	racional.denominador = b;
	printf ("Listo\n");
	return racional;
	};


	RATIONAL AddRational (RATIONAL n, RATIONAL m){
        RATIONAL z;
        z.numerador=n.numerador*m.denominador + m.numerador*n.denominador;
        z.denominador=n.denominador*m.denominador;
        return z;
	}

	RATIONAL MultRational (RATIONAL n, RATIONAL m){
        RATIONAL z;
        z.numerador=n.numerador*m.numerador; //+ m.numerador*n.denominador;
        z.denominador=n.denominador*m.denominador;
        return z;
	}

	RATIONAL RestRational (RATIONAL n, RATIONAL m){
        RATIONAL z;
        z.numerador=n.numerador*m.denominador - m.numerador*n.denominador;
        z.denominador=n.denominador*m.denominador;
        return z;
	}
void PrintRational (RATIONAL n)
	{
	    int j=0;
		if(n.numerador>n.denominador&& n.numerador!=0)
        {
            do
            {
                j=j+1;
               if(n.denominador%j==0 && n.numerador%j==0 )
                {
                   n.numerador=n.numerador/j;
                   n.denominador=n.denominador/j;
                }
            }
            while(j<=n.denominador);
            printf("%d / %d\n", n.numerador, n.denominador);
        }
		if (n.numerador<n.denominador&& n.numerador!=0)
        {
            do
            {
                j=j+1;
                if(n.numerador%j==0 && n.denominador%j==0)
                {
                   n.numerador=n.numerador/j;
                   n.denominador=n.denominador/j;
                }

            }
            while(j<=n.numerador);
            printf("%d / %d\n", n.numerador, n.denominador);

        }
        if (n.numerador==n.denominador)
        {
            printf("1\n");
        }
        if (n.numerador==0)
        {
            printf("0\n");
        }

	}

	int main() /* Saca por pantalla operaciones básicas */
	{
		RATIONAL X,Y,resultado;
		int a,b;
		int c,d;
		printf("Ingrese el numerador de la primera fracción \n");
		scanf("%d",&a);
		printf("Ingrese el denominador de la primera fracción \n");
		scanf("%d",&b);
		printf("Ingrese el numerador de la segunda fracción \n");
		scanf("%d",&c);
		printf("Ingrese el denominador de la segunda fracción \n");
		scanf("%d",&d);

		X = MakeRational (a,b);
        Y = MakeRational(c,d);

        resultado = AddRational(X,Y);
        printf("El resultado de la suma es: ");
        PrintRational(resultado);

        resultado=MultRational(X,Y);
        printf("El resultado de la multiplicacion es: ");
        PrintRational(resultado);

        resultado=RestRational(X,Y);
        printf("El resultado de la resta es: ");
        PrintRational(resultado);

		return 0;
	}


