#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,i,*ptr,sum=0;
printf("Introduce el numero de elementos: \n");
scanf("%i",&num);
ptr=(int*)calloc(num,sizeof(int));
if(ptr==NULL)
{
printf("Error! memoria no reservada");
exit(0);
}
printf("Introduce los elementos del arreglo: \n");
for(i=0;i<num;i++)
{
scanf("%i",ptr+1);
sum+= *(ptr+i);
}
printf("Sum=%i",sum);
free(ptr);
return 0;
}
