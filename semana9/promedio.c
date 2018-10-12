#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
FILE *datos;
int i,num;
float sum;
float *ptr= (float*)malloc(num*sizeof(float));
num=0;
sum=0;
printf("Escribe el numero de datos que hay en tu archivo: ");
scanf("%d",&num);
datos=fopen("promedio.txt","r");
for (i=0;i<num;i++)
{
	fscanf(datos,"%f\n",&ptr[i]);
	sum += ptr[i];
}
fclose(datos);
sum=sum/num;
printf("El promedio es: %f\n",sum);
free(ptr);
return 0;
}

