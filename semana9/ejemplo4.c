#include<stdio.h>
float cuadrado();
int main()
{
float a;
a=cuadrado();
printf("%f",a);
return 0;
}


float cuadrado()
{
float h,x;
printf("introduce un número \n");
scanf("%f",&h);
x=h*h;
return x;
}
