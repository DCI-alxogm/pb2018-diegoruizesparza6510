#include<stdio.h>
#include<math.h>

int main(){
//declaracion de variables
float masap,Pi;
int n=366,h,i,o;
double G,a,b,c,d,e,f;
double x[n],y[n],z[n],vx[n],vy[n],vz[n],r;
FILE *planeta;
FILE *resultados;
G=52259512.185;

//presentacion del programa
printf("Hola, este programa calcula la orbita de diferentes planetas entorno al sol\n");
	planeta=fopen("tierra.txt","r"); //dependiendo de la variable seran los datos(en este caso se van a leer los datos de mercurio)
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f %i",&a,&b,&c,&d,&e,&f,&masap,&h);//leer los datos
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t %i\t \n",a,b,c,d,e,f,masap,h);//se guardan los datos en las variable
	fclose(planeta);
	//se asignan los valores a la ṕosición 0 de nuestros arreglos
	x[0]=a; 
	y[0]=b;
	z[0]=c;
	vx[0]=d;
	vy[0]=e;
	vz[0]=f;
	resultados=fopen("resultadostierra.txt","w"); //se cierra el archivo de datos del planeta
		for(i=1;i<366;i++) //se van a hacer 1000 calculos ya que nuestro paso es de 0.001 y el valor de nuestro año es 1
	{
	    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));//se calcula el radio con los valores de x,y,z de cada planeta, en este caso los de mercurio
	    //se realizan operaciones, se pone i-1 porque tenemos que empezar con los valores iniciados dados en nuestros archivos de texto de los planetas
	    x[i]=x[i-1]+vx[i-1]*h; 
	    y[i]=y[i-1]+vy[i-1]*h;
	    z[i]=z[i-1]+vz[i-1]*h;
	    vx[i]=vx[i-1]-h*((G*masap*x[i-1])/pow(r,3));
	    vy[i]=vy[i-1]-h*((G*masap*y[i-1])/pow(r,3));
	    vz[i]=vz[i-1]-h*((G*masap*z[i-1])/pow(r,3));
	    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[i],y[i],z[i],vx[i],vy[i],vz[i]);//Los resultados se van guardando en cada arreglo
	    printf("%i\n",i);//se imprime el numero de veces que se realizo el for, en nuestro caso 100
	}
	    fclose(resultados);//se cierra la variable de los resultados
//termina nuestro primer if y continuan los demas en caso de que el numero no sea 0, se repiten las mismas acciones en cada if
return 0;// termina el programa
}
