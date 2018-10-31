#include <stdio.h>
#include "holamake.h"

void printholamake( )
{
printf("Hola makefile....!\n");
}

void cuadrado()
{
int h,x;
printf("Dame un número para encontrar su cuadrado \n");
scanf("%i",&h);
x=h*h;
printf("El cuadrado del número es: %i \n \n",x);
}
