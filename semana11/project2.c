#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void projecto(float e, float x)

{
	float ,ee=1;
	int n,i,j;
	float a,d,w,s,o,t;
	FILE *fp,*resultados,*in;
	

	fp=fopen("datos.txt","r");
	fscanf(fp,"%f %f %f %f %f %i",&a,&d,&w,&s);
	fclose(fp);
	n=x*x;
	double **T = (double**)malloc(x*sizeof(int*));

	in=fopen("inicio.txt","w");
	for(i=1;i<=x;i++)
{
			for(j=1;j<=x;j++)
{
		if(i=1)
		T[i][j]=a;
		else if(i=n)
		T[i][j]=d;
		else if(j=1)
		T[i][j]=w;
		else if(j=n)
		T[i][j]=s;
		else
		T[i][j]=0;
		fprintf(in,"%lf",T[i][j]);
}
		fprintf(in,"\n");
}
	fclose(in);	
	while(ee>=e)
{	
		sprintf(num,"%i.ods",x);
		resultados=fopen("resultados.txt","w");
}
	for(i=1;i<=x-1;i++)
{
			for(j=1;j<=x-1;j++)
{ 
	o=T[i][j];		
	T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);
	t=(T[i][j]-o)/o;
	if(abs(t)<ee)
{
	ee=t;
}		
}	
}
	for(i=1;i<=x-1;i++)
{
        for(j=1;j<=x-1;j++)
{
	fprintf(resultados,"%f",T[i][j]);
}
}
	fclose(resultados);
	free(T);
}





