#include <stdio.h>
int main()
{
int i,f,n,a,j;
printf("este programa te muestra los numeros primos en un intervalo definido por ti\n");
printf("Cual es tu limite inferior: \n");
scanf("%i", &i);	
printf("Cual es tu limite superior: \n");
scanf("%i", &f); 
for (int j=i;j<=f;j++){
 int a=0;
 for(int n=1;n<=100;n++)
 {
     if(j%n==0) 
     a++;
 }
 if (a==2){ 
	 printf("%d, ", j);
 }
 }
return 0;
}
