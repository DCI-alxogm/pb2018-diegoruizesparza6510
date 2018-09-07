#include <stdio.h>
#include <math.h>
int main()
{
int ok,n,a;
int x,y,z,w,b;
while(ok==1||2)
{
if(ok==2)
{
return 1;
}
printf("Este programa convierte numeros binarios a decimales y decimales a binarios\n");
printf("Presiona 1 para convertir de binarios a decimales y 2 para convertir de decimales a binarios\n");
scanf("%i",&n); 
b=1;
z=0;
w=0;
switch (n){
case 1:
printf("Cual es tu un numero binario? \n");
a=0;
while((a==0) || (a==1)){
scanf("%i",&a);
if((a==0)||(a==1)){ 				
b=1;
}
else{
b=0;
}
z=z+x*b*pow(2,w); 
w++;
}
printf("tu numero binario en decimal es: %i \n",z);
break;
case 2:
printf("Cual es tu numero decimal?\n");
scanf("%i",&x);
while(x!=0){
y=x%2;
x=x/2;
if(y==0){
printf("0");
}
else{
printf("1");
}
}
break;
}
printf("¿Quieres continuar o salir?\n");
printf("presiona 1 para continuar o 2 para salir\n");
scanf("%i",&ok);
}
return 0;
}
