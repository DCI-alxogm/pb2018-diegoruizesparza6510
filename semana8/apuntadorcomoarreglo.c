#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,sum=0,*num;
num=(int*)malloc(6*sizeof(int));
printf("Introduce 6 numeros enteros:\n");
for(i=0;i<6;i++)
{
scanf("%i",&num[i]); //(num+i) es equivalente a &num[i]
sum+=num[i]; //*(num+i) es equivalente a num[i]
}
printf("suma=%i",sum);
free(num);
return 0;
}

