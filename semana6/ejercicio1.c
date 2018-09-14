#include <stdio.h>
int main()
{
int N,i;
char a,t=0;
float temp,edad[N],sexo[N],sem[N],cali[N],semestre[9],h=0,m=0,p=0,edadsem[9],promedad=0,c[9];
printf("Introduce el número de alumnos:\n");
scanf("%i", &N);
for(int i=0 ; i<9 ; i++)
{
semestre[i]=0;
edadsem[i]=0;
c[i]=0;
}
printf("A continuación, introduzca %i lineas de datos siguiendo:\n", N);
printf("Edad,Sexo(H-M),Semestre,promedio\n");
for(int i=0 ; i<N ; i++){
scanf("%f %c %f %f", &edad[i], &a, &sem[i], &cali[i]);
if(a=='h')
{
sexo[i]=0;
h++;
}
else
{
sexo[i]=1;
m++;
}
t = sem[i]-1;
edadsem[t]+=edad[i];
promedad+=edad[i];
c[t]+=cali[i];
p+=cali[i];
semestre[t]++;
}
printf("Total de estudiantes: %i , De los cuales %0.0f son mujeres y %0.0f son hombres\n", N, m, h);
printf("Estudiantes por semestre:\n");
for(int i=0 ; i<8 ; i++)
{
printf("Semestre %i°    %0.0f \n", i+1, semestre[i]);
}
temp = p/N;
printf("Promedio de calificaciones: %0.2f \n", temp);
printf("Promedio de calificaciones por semestre:\n");
for(int i=0 ; i<8 ; i++)
{
if(semestre[i]!=0)
{
temp= c[i]/semestre[i];
}
else
{
temp=0;
}
printf("\n Semestre %i°  %0.2f", i+1, temp);
}
temp = promedad/N;
printf("\n Promedio de edad: %0.2f \n", temp);
printf("\n Promedio de edad por semestre: \n");
for(int i=0 ; i<8 ; i++)
{
if(semestre[i]!=0)
{
temp = edadsem[i]/semestre[i];
}
else
{
temp=0;
}
printf("Semestre %i°    %0.2f \n", i+1, temp);
}
return 0;
}
