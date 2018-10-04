#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,i,*ptr,sum=0;//declaracion de variables y apuntador
ptr=(int*)malloc(num*sizeof(int));//sintaxis de malloc,se multiplicara el tamaño de memoria de int por las posiciones de memoria que se van a guardar
printf("Introduce el numero de elementos: \n");
scanf("%i",&num);
if(ptr==NULL) //como ya asginamos memoria esto debe de ser falso
{
printf("Erro! Memoria no reservada\n");
exit(0);
}
printf("Introduce los elementos del arreglo: \n");
for(i=0;i<num;i++)
{
scanf("%d",ptr+1);
sum+=*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
return 0;
}



