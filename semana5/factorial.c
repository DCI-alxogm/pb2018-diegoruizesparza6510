#include<stdio.h>
int main()
{
    int i,p,fact=1,n,r;
    while(p==1||2)
{
    printf("hola, este programa calcula el factorial");
    printf("De que numero quieres obtener su factorial\n");
    scanf("%i",&n);
    if (n<0)fact=0;
    else if(n==0) fact=1;
    else
{
    for(i=1;i<=n;i++)
{
    fact=fact*i;

    r=fact;
}
    printf("\n tu factorial es:%i",r);
}
    printf("¿Quieres ejecutar de nuevo el programa? teclea 1 para continuar o 2 para salir?\n");
    scanf("%i",&p);
}
return 0;
}
