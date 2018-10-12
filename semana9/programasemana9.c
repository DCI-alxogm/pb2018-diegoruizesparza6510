#include<stdio.h>
float temp1();
void temperatura2(float C);
void temperatura3();
float temperatura4(float C);
int main()
{
int o;
float a,C,F,K,X,X2;
printf("Hola Diego, este es un programa que convierte temperaturas de grados centigrados a kelvin y farenheit \n");
printf("Por favor escoge como quieres que se ejecute el programa\n");
printf("[1]Sin variables de entrada pero si de salida\n");
printf("[2]Con variables de entrada pero sin de salida\n");
printf("[3]Sin variables de entrada y sin variables de salida\n");
printf("[4]con variables de entrada y con de salida\n");
scanf("%i",&o);
if(o==1)
	a=temp1();
	printf("%f",a);
	return 1;
if(o==2)
	printf("Inhtroduce un valor de la temperatura en centigrados\n");
	scanf("%f",&C);
	temperatura2(C);
	return 2;
if(o==3)
	temperatura3();
	return 3;
if(o==4)
	printf("¿que temperatura en C° quieres convertir? \n");
	scanf("%f",&X);
	X2=temperatura4(X);
	printf("La temperatura en centigrados es %f \t farenheit %f \t kelvin %f",C,F,K);
	return 4;
return 0;
}

float temp1()
{
float C,F,K;
printf("¿que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
return C,F,K; 
}

void temperatura2(float C)
{
float F,K;
F=(9/5*C)+32;
K=273+C;
printf("la temperatura equivalente en F° es:%f\n",F);
printf("la temperatura equivalente en K es:%f\n",K);
printf("la temperatura incicial en C° es:%f\n",C);
}

void temperatura3()
{
float C,F,K;
printf("¿que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
printf("la temperatura equivalente en F° es:%f\n",F);
printf("la temperatura equivalente en K es:%f\n",K);
printf("la temperatura incicial en C° es:%f\n",C);
}

float temperatura4(float C)
{
float F,K;
F=(9/5*C)+32;
K=273+C;
return C,F,K; 
}



