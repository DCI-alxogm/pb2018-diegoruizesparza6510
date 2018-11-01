#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void projecto()
{
	float **T;
	int i,n,j,x=0,h=0;
	float a,d,w,s;
	FILE *fp;
	FILE *ff;
	
	fp=fopen("datos.txt","r");
	fscanf(fp,"%f %f %f %f %i %f",&a,&d,&w,&s,&x);
	fclose(fp);
	n=x*x;
	T=(float**)malloc(x*sizeof(int*));
	for(i=0;i<=n;i++){                    
	T[i]=(float*)malloc(x*sizeof(int));}
	
for(h=0;h<11;h++){
char arr[10]={'0','1','2','3','4','5','6','7','8','9'}; 
arr[1]=arr[1]+h;
ff=fopen(arr,"w");
	for(i=0;i<x;i++){	
			for(j=0;j<x;j++){ 
					
				if(i==0){
				T[i][j]=a;
				}else if(i==(x-1)){
				T[i][j]=d;
				}else if(j==0){
				T[i][j]=w;
				}else if(j==(x-1)){
				T[i][j]=s;
				}else{
				T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);} 
		fprintf(ff,"%2.2f  \t",T[i][j]); 
			}
		fprintf(ff,"\n"); 
		fprintf(ff,"\n");
		}
}
fclose(ff);	
free(T);       
}

