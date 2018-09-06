#include<stdio.h>
#include<math.h>

int main()
{
int n,i;
float x,del, ex, lo, si, co, ra, a, b;
        printf("Este programa calcula el logaritmo,seno,coseno, raíz cuadrada y exponente de un numero :\n");
	printf("Introduce el limite inferior:\n");
	scanf("%f", &a);
	printf("Introduce el limite superior: \n");
	scanf("%f", &b);
	printf("Introduce el espaciado que quieres:\n");
	scanf("%f", &del);
n=((b-a)/del);
for(i=0;i<=n;i++)
{

     x=(a+(del*i));
     ex=exp(x);
     lo=log(x);
     si=sin(x);
     co=cos(x);
     ra=sqrt(x);
     printf("El número dado es %f \n", x); 
     printf("El exponente del número es: %f \n", ex);
     printf("El logaritmo del  número es:%f \n", lo);
     printf("El seno del número es: %f \n", si);
     printf("El coseno del número es:%f \n", co);
     printf("La raíz del número es: %f \n", ra);
}
return 0;
}
