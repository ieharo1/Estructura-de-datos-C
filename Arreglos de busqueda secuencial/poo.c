#include <stdio.h>
#include <stdlib.h>
private long numerador;
private long denominador;
private void reduce(void);

RATIONAL::RATIONAL(void){
    int numerador=0, denominador=1;
}
RATIONAL::RATIONAL(long i){
    int numerador=i, denominador=1;
}
RATIONAL::RATIONAL(long num, long denom){
    int numerador=num, denominador=denom;
}
int main()
{
    RATIONAL(void);
    RATIONAL(long);
    RATIONAL(long,long);
}
