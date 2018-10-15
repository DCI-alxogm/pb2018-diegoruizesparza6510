//nombre archivo, numero puntos para guardar, separacion entre los puntos
#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
printf("El programa que estas ejecutando es: %s \n", argv[0]);
char *nombre_archivo;
float xi,xf,yi,yf,zi,zf,h;
float x[n],y[n],z[n];
int n;
FILE *fp;
if(argc==4)
{
nombre_archivo=argv[1];
n=atoi(argv[2]);
h=atof(argv[3]);
printf("El nombre del archivo a abrir es: %s \n", nombre_archivo);
printf("¿Qué valor para xi,yi,zi quieres? \n");
scanf("%f",&xi);
printf("¿Qué valor para xf,yf,zf quieres? \n");
scanf("%f",&xf);
yi=xi;
zi=xi;
yf=xf;
zf=xf;
fp=fopen(nombre_archivo,"w");
for(i=xi,xf<n,i++)
{

 
fprintf(fp,"ti:%f, \t tf: %f, \t N: %i",ti,tf,num);					//Aquí se pondría todo lo que se quiere hacer...
fclose(fp);
}
}
else if(argc>4)
{
printf("Mas argumentos de los necesarios \n");
}
else
{
printf("Se requieren 4 argumentos: ti, tf, num, num_archivo \n");
}
return 0;
}

