#include<stdio.h>
int main()
{
int p,a,b,N,k;
FILE *fp;
printf("este archivo va aguardar los datos\n");
fp=fopen("o.txt","w+r");
fprintf(fp,"valor para la potencia\n");
fscanf(fp,"%i",&p);
fprintf(fp,"limite inferior\n");
fscanf(fp,"%i",&a);
fprintf(fp,"limite superior\n");
fscanf(fp,"%i",&b);
fprintf(fp,"veces que se realizara\n");
fscanf(fp,"%i",&N);
fprintf(fp,"número de trapecios\n");
fscanf(fp,"%i",&k);
fclose(fp);

return 0;
}

