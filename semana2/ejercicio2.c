/*programa que dara 4 resultados diferentes para 4 números dados por el usuario*/
#include<stdio.h>
int main()
{
float a,b,c,d,e1,e2,e3,e4;
printf("hola, este es un programa que calcula los valores para e1,e2,e3,e4");
printf("que valos quieres para a?\n");
scanf("%f",&a);
printf("que valos quieres para b?\n");
scanf("%f",&b);
printf("que valos quieres para c?\n");
scanf("%f",&c);
printf("que valos quieres para d?\n");
scanf("%f",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;
printf("el valor para e1=(a+b)*c/d es:%f\n",e1);
printf("el valor para e2=(a+b)*c/d es:%f\n",e2);
printf("el valor para e3=(a+b)*c/d es:%f\n",e3);
printf("el valor para e4=(a+b)*c/d es:%f\n",e4);
return 0;
}


