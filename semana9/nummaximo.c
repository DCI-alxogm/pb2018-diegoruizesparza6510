//Programa creado por Diego Ruiz Esparza el 12/oct/2018
#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *datos;
int i,x,o;
float a,b,c;
float *ptr= (float*)malloc(x*sizeof(float));
x = 0;
printf("Hola, este programa calcula el numero mayor que existe en un archivo");
printf("Introduce el numero de datos que existen en tu archivo: ");
scanf("%d",&x);
datos=fopen("num_maximo.txt","r");
for (i=0;i<x;i++){ 
	fscanf(datos,"%f\n",&ptr[i]);

if (i==1)
{
	a=ptr[i-1];
	b=ptr[i];
if(b<=a)
	c=a;
else 
	c=b;
}
if(i>1) 
	b=ptr[i];
if(c<b)
	c=b;
else
	c=c;
}
fclose(datos);

printf("El número mayor del archivo es: %f\n",c);
free(ptr);
return 0;
}
