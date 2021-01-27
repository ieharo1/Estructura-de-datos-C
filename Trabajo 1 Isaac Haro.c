#include <stdio.h>//Isaac Haro Estructura de Datos

	typedef struct Rational{
		int numerador;//variables
		int denominador;
	} RATIONAL;


	RATIONAL MakeRational (int a, int b)//Creacion del Rational
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

	void PrintRational (RATIONAL n)
	{
		printf("%d / %d\n", n.numerador, n.denominador);
	}
	RATIONAL AddRational (RATIONAL n, RATIONAL m)//Suma
	{
	    RATIONAL z;
	    z.numerador = n.numerador*m.denominador+m.numerador*n.denominador;
	    z.denominador= n.denominador*m.denominador;

	    return z;
	}
    RATIONAL RestRational (RATIONAL n, RATIONAL m)//Resta
    {
        RATIONAL w;
        w.numerador = n.numerador*m.denominador-m.numerador*n.denominador;
        w.denominador= n.denominador*m.denominador;

        return w;
    }
     RATIONAL MultRational (RATIONAL n, RATIONAL m)//Multiplicacion
    {
        RATIONAL o;
        o.numerador = n.numerador*m.numerador;
        o.denominador= n.denominador*m.denominador;


        return o;
    }

	int main() /* Saca por pantalla una suma, resta y multiplicacio*/
	{
		RATIONAL X,Y,P;
		int a=3,b=2,c=5,d=3;
		X = MakeRational (a,b);
		Y = MakeRational (c,d);
		PrintRational (X);
		PrintRational (Y);
		printf("Suma ");
		PrintRational (AddRational(X,Y));
		printf("Resta ");
		PrintRational (RestRational(X,Y));
		printf("Multiplicacion ");
		PrintRational (MultRational(X,Y));

		return 0;
	}



