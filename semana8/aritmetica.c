#include<stdio.h>
int main()
{
int MAX=3; //declaracion de variable con valor de 3
int var[]={10,100,200}; //arreglo con 3 valores 
int i, *ptr; //declaracion del contador y el apuntador
ptr=&var; //asignacion de la direccion del arreglo al apuntador
for (i=0;i<MAX;i++)
{
printf("la dirección de la variables var[%i]=%x\n",i,ptr);//imprimimos la direccion de la variable var
printf("valor de la variable var[%i]=%i\n",i,*ptr);//para la primera vez nos debe imprimir 10
ptr++;//nos movemos a la siguientes posicion en la memoria(para este caso a los proximos 4 bits)
}
return 0;
}
