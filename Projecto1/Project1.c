#include<stdio.h>
#include<math.h>
int main()
{
int n=5;
double x[n],y[n],z[n];
double vx[n],vy[n],vz[n];
double h,r,xx,yy,zz,bx,by,bz;
float masa=0.000003;
FILE *datos;
FILE *resultados;
printf("este programa calcula la orbita de un planeta entrono al sol \n");
datos=fopen("dato.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf",&h,&x,&y,&z,&vx,&vy,&vz);
fclose(datos);
for(n=0;n<10;n++)
 {
  x[n]=0;
  y[n]=0;
  z[n]=0;
  vx[n]=0;
  vy[n]=0;
  vz[n]=0;
 }
resultados=fopen("resultados.txt","w");
fprintf(resultados,"x\t y\t z\t vx\t vy\t vz\t \n");
for(n=0;n<10;n++)
 {
  fprintf(resultados,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\t \n",x[n],y[n],z[n],vx[n],vy[n],vz[n]);
 }
return 0;
}
