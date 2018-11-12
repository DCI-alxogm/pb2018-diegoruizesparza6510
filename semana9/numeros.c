#include<stdio.h>
int main()
{
char algo[255];
int n=NULL;
FILE *archivo;
printf("HOLA, ESTE PROGRAMA TE DICE CUAL ES EL NÚMERO MAYOR DE EL ARCHIVO 'num_maximo'\n");
archivo=fopen("num_maximo.txt","r");
while(!n)
{
fgets(algo,255,(FILE*)archivo);
printf("\n %s",algo);
}
fclose(archivo);
return 0;
}

