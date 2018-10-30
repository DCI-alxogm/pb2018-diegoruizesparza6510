//Esta función es llamada por el int main y se encargara de realizar todos los calculos y creación de archivos
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void projecto()
{
	float **T;//Se declara un apuntador que se usara como un arreglo de 2 dimensiones	
	int i,n,j,x=0,h=0;//se declara i que es nuestra x, j que es nuestra y, "x" y "h" se inicializa en 0
	float a,d,w,s;//se declaran a:izquierda, d:derecha, w:arriba, s:abajo
	FILE *fp;//se declara un apuntador que abrira el archivo de donde se van a obtener las variables de entrada
	FILE *ff;//se declara un apuntador que abrira los documentos donde se guardara el avance del calentamiento de la placa en cada punto
	
	fp=fopen("datos.txt","r");
	fscanf(fp,"%f %f %f %f %i %f",&a,&d,&w,&s,&x);//Se obtienen los parametros iniciales
	fclose(fp);
	n=x*x;//Como es un cuadrado, se multiplican los dados para posteriormente crear el espacio matricial en T
	T=(float**)malloc(x*sizeof(int*));
	for(i=0;i<=n;i++){                    //Se guarda espacio para la matriz en memoria dinámica
	T[i]=(float*)malloc(x*sizeof(int));}
	
for(h=0;h<11;h++){//Este for nos sirve para imprimir 11 archivos con el avance de las temperaturas
char arr[10]={'0','1','2','3','4','5','6','7','8','9'}; //Se declara un arreglo para crear archivos
arr[1]=arr[1]+h;
ff=fopen(arr,"w");//se crea archivo
	for(i=0;i<x;i++){	//va contabilizando el movimiento en el eje x	
			for(j=0;j<x;j++){  //va contabilizando el movimiento en el eje y
				//Se agregan condiciones para que las orillas de la placa se mantenga constantes	
				if(i==0){
				T[i][j]=a;
				}else if(i==(x-1)){
				T[i][j]=d;
				}else if(j==0){
				T[i][j]=w;
				}else if(j==(x-1)){
				T[i][j]=s;
				}else{
				T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);} //Se calcula la temperatura en determinado punto
		fprintf(ff,"%2.2f  \t",T[i][j]); //se imprime la temperatura y se da un salta de columna, utilizando 2 enteros y 2 decimales
			}
		fprintf(ff,"\n"); //Se dan 2 saltos de linea para que se observe mejor la matriz
		fprintf(ff,"\n");
		}
}
fclose(ff);	//Se cierra el operador que crea los archivos
free(T);       //Se libera la memoria de nuestro apuntador T
}

