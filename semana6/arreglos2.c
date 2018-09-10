#include<stdio.h>
int main ()
{
int i,N=10;
float numeros[N];
for(i=0;i<N;i++)
{
scanf("%f",&numeros[i]);
numeros[i]*=2;
printf("%f\n",numeros[i]);
}
return 0;
}
