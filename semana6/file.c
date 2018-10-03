#include<stdio.h>
int main()
{
FILE *archivo;
float var1,var2;
char var[255];
archivo=fopen("test.txt","w");
fputs("aqui se coloca el texto para que se imprima \n",archivo);
fprintf(archivo,"fprint...\n");
var1=0.155555;
var2=100.8555;
fprintf(archivo, "%f %f\n",var1,var2);
fclose(archivo);
archivo=fopen("test.txt","r");
fgets(var,255,(FILE*)archivo);
printf("%s\n",var);
fscanf(archivo,"%s\n",var);
printf("%s\n",var);
fscanf(archivo,"%f %f",&var1,&var2);
printf("%f %f \n",var1,var2);
fclose(archivo);
return 0;
}
