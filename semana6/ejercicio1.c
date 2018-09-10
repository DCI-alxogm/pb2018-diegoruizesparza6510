#include<stdio.h>
int main()
{
int i,m,f,n=10,o,h=9,p=10,semestre[h];
float z,alumnos[n],promedio[p];

printf("este programa solicita, sexo, semestre y promedio de 10 alumnos \n");
printf("despues te dice cuantos son hombres y cuantos mujeres, en que semestre van y el promedio de sus calificaciones \n");
printf("dime cuantos alumnos son hombres\n");
scanf("%i",&m);
printf("dime cuantos alumnos son mujeres\n");
scanf("%i",&f);
for (i=0;i<h;i++)
{
printf("dime cuantos alumnos hay en cada semestre, empezando por el 1ro hasta el noveno\n");
scanf("%i",&semestre[h]);
}
for (i=0;i<p;i++)
{
printf("el promedio de los 10 alumnos\n");
scanf("%f",&promedio[p]);
}
z=promedio[p]/10;
printf("alumnos: %i \n",m);
printf("alumnas: %i \n",f);
printf("alumnos en cada semestre:%i \n",semestre[h]);
printf("el promedio de los alumnos es: %f \n",z);
return 0;
}
