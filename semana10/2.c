#include<stdio.h>
#include<math.h>
void raiz( )
{
float d,x,y;
printf("Da el valor para x\n");
scanf("%f",&x);
printf("Da el valor para y\n");
scanf("%f",&y);
d=sqrt((pow(x,2)+pow(y,2)));
printf("La distancia de %f a %f es %f \n",x,y,d);
}

