#include<stdio.h>
#include<math.h>
int main()
{
int n,f,i,o;
float s;
float ex,lo,si,co,ra;
 while(o==1||2)
{ if(o==2)
  return 1;
 printf("Hola, este programa calcula el exponencial, logaritmo, seno, coseno y raíz cuadrada de una variable x \n");
 printf("¿Qué valor le daras a la variable x? \n");
 scanf("%f",&s);
 printf("¿En qué valor quieres que inicie el programa? \n");
 scanf("%i",&n);
 printf("¿En qué valor quieres que termine el programa? \n");
 scanf("%i",&f);
for(i=n;i<f;i++)
  { 
    ex=exp(s);
    lo=log(s);
    si=sin(s);
    co=cos(s);
    ra=sqrt(s);
    printf("%f %f %f %f %f \n",ex,lo,si,co,ra);
  }
 printf("¿Quieres continuar el programa o salir? \n");
 printf("Presiona 1 para continuar o 2 para salir\n");
 scanf("%i",&o);
}
return 0;
}
