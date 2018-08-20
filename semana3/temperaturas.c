/*programa que pide una temperatura en grados centigrados y da su equivalente en grados kelvin y farenheit, regresar la temperatura dada en grados centigrados*/
#include<stdio.h>
int main()
{
float C,F,K;
printf("hola Diego, este es un programa que convierte temperaturas de grados centigrados a kelvin y farenheit \n");
printf("¿que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
printf("la temperatura equivalente en F° es:%f\n",F);
printf("la temperatura equivalente en K es:%f\n",K);
printf("la temperatura incicial en C° es:%f\n",C);
return 0;
}

