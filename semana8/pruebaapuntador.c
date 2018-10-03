//Programa creado por Diego Ruiz Esparza Flores el 02/oct/2018
#include<stdio.h>
int main()
{
int var=20; //declaración de variable y asignacion de valor
int *ip; //declaración de apuntador
ip=&var; //asigna a ip la direeción de var
printf("La dirección de la var es: %x\n", (int)&var); //se imprime la dirección donde se encuentra var
printf("Dirección guardada en el apuntador ip: %x \n",(int) ip); //se imprime la dirección donde se encuentra var por medio del apuntador, teoricamente tiene que ser la misma que la anterior
printf("El valor de *ip: %i\n", *ip); //nos da el contenido del primer espacio de memoria del apuntador en este caso 20
return 0;
}
