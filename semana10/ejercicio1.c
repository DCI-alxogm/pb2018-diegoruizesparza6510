#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	printf("El nombre del archivo que se esta ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	int i,num=0;
	float h;
	float *x = (float*)malloc(num*sizeof(float));
	float *y = (float*)malloc(num*sizeof(float));
	float *z = (float*)malloc(num*sizeof(float));
	FILE *fp;

if(argc==4)
	{
	nombre_archivo=argv[1];
	num=atoi(argv[2]);
	h=atof(argv[3]);
	printf("El nombre del archivo que se usara es: %s\n",nombre_archivo);
	printf("Escribe el valores para x inicial \n");
	scanf("%f",&x[0]);
	y[0]=x[0];
	z[0]=x[0];
	printf("Abrir");
	fp=fopen(nombre_archivo,"w+");
for(i=1;i<num;i++)
		{
	x[i]=(float)i;
	y[i]=x[i];
	z[i]=x[i];
	fprintf(fp,"%d \t x: %f, \t y: %f, \t  z: %f, \n",i,x[i],y[i],z[i]);
		}

	fclose(fp);
	}
		
else if(argc>4)
	{
	printf("Diste mas argumentos de los necesarios \n");
	}
else 
	{
	printf("Se requieren 3 argumentos: nombre_archivo, num, h \n");
	}
return 0;
}


