/*programa que convierte coordenadas cartesianas a coordenadas esfericas*/
#include<stdio.h>
#include<math.h>
int main()
{
float d,y,z,r,a,p;
printf("Hola Diego, este es un programa que convierte coordenadas cartesianas a coordenadas esfericas \n");
printf("intorduce el valor para x\n");
scanf("%f",&d);
printf("intorduce el valor para y\n");
scanf("%f",&y);
printf("intorduce el valor para z\n");
scanf("%f",&z);
r=sqrt((pow(d,2))+(pow(y,2))+(pow(z,2)));
y=(180/3.1416)*y;
z=(180/3.1416)*z;
d=(180/3.1416)*d;
a=acos(z/r);
p=atan(y/d);
d=(3.1416/180)*d;
y=(3.1416/180)*y;
z=(3.1416/180)*z;
printf("el valor de tu 1er coordenada (r) es:%f\n",r);
printf("el valor de tu 2da coordenada (teta) es:%f\n",a);
printf("el valor de tu 3ra coordenada (phi) es:%f\n",p);
printf("tu coordenada inicial para x fue:%f\n",d);
printf("tu coordenada inicial para y fue:%f\n",y);
printf("tu coordenada inicial para z fue:%f\n",z);
return 0;
}

