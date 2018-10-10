//argumentos de entrada pero no de salida
#include<stdio.h>
void cuadrado(float x);
int main()
{
float x;
printf("introduce un número \n");
scanf("%f",&x);
cuadrado(x);
return 0;
}



void cuadrado(float x)
{
float x2;
x2=x*x;
printf("El cuadrado de %f es %f \n",x,x2);
}
