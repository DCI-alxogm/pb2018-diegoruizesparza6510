/*programa que dara 3 resultados para y(y1,y2,y3) de determinadas operaciones, ingresando un valor para la variable x*/
#include<stdio.h>
#include<math.h>
int main()
{
float d,y1,y2,y3;
printf("hola Diego, este programa te dara 3 valores para y dependiendo del valor que ingreses a la variable x \n");
printf("da el valor para la variable x \n");
scanf("%f",&d);
y1=exp(-d);
d=d*(3.1416/180);
y2=cos(d)+(2*(tan(d/2)));
d=d*(180/3.1416);
y3=log(d)+(3*(pow(d,2)));
printf("da el valor para la variable y1 es:%f \n",y1);
printf("da el valor para la variable y2 es:%f \n",y2);
printf("da el valor para la variable y3 es:%f \n",y3);
return 0;
}
