#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
printf("El programa que estas ejecutando es: %s \n", argv[0]);
char *nombre_archivo;
float ti,tf;
int num;
FILE *fp;
if(argc==5)
{
ti=atof(argv[1]);
tf=atof(argv[2]);
num=atoi(argv[3]);
nombre_archivo=argv[4];
printf("El nombre del archivo a abrir es: %s \n", nombre_archivo);
fp=fopen(nombre_archivo,"w"); 
fprintf(fp,"ti:%f, \t tf: %f, \t N: %i",ti,tf,num);					//Aquí se pondría todo lo que se quiere hacer...
fclose(fp);
}
else if(argc>5)
{
printf("Mas argumentos de los necesarios \n");
}
else
{
printf("Se requieren 4 argumentos: ti, tf, num, num_archivo \n");
}
return 0;
}

