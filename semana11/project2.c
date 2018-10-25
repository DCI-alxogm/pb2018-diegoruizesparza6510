#include<stdio.h>
#include<stdlib.h>

void projecto();
void initialize(int n,float izq, float arri, float der, float aba, float **T);

void projecto()
{

	float e,a;
	int i,j,N,n=0;
	float izq,arri,der,aba;
	
	FILES *archivo1,*fp;
	//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
	archivo1=fopen("datos.txt","r");
	fscanf(" %i %f %f %f %f %f ",&n,&izq,&arri,&der,&aba,&e);
	fclose(archivo1);
	double **T= (double**)malloc(n*sizeof(double));
	for(i=0;i<n;i++){
	T[i]=(double*)malloc(n*sizeof(double));
	}
	N=n*n;
	initialize(n,izq,arri,der,aba,T);
	fp=fopen("resultados.txt","w");
	for(i=0;i<N;i++)
	{
	while(a<e)
	{
	T[i][j]=(((T[i+1],[j])+(T[i-1],[j])+(T[i],[j+1])+(T[i],[j-1]))/4);
	a=(Txy[i]-Txy[i-1])/Txy[i-1];
	fprintf(" %f %f %f",x[i],y[i],Txy[i]);
	}
	}
	fclose(fp);
	free(T);
}

void initialize(int n,float izq, float arri, float der, float aba, float **T)
{
int i,j;
for(i=0;i<n;i++)
		for(j=0;j<n;j++){
		if(i=0)
		T[i][j] = izq;
		else if(j=0)
		T[i][j] = arri;
		else if(i=n)
		T[i][j] = der;
		else if(j=n)
		T[i][j] = aba;
		else 
		T[i][j] = 0;
	}
}
