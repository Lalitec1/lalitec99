#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
char nombre[]={};
char apellido1[]={};
char apellido2[]={};
float horas,precio,ingreso,impuesto,neto;

printf("Ingrese su nombre con apellidos por favor\n");
scanf("%s %s %s",&nombre,&apellido1,&apellido2);
printf("\nIngrese el numero de horas que trabajo\n");
scanf("%f",&horas);
printf("\nIngrese el precio por hora que le pagan\n");
scanf("%f",&precio);
ingreso=horas*precio;
impuesto=(0.25)*ingreso;
neto=ingreso-impuesto;
printf("Hola %s %s %s\n",nombre,apellido1,apellido2);
printf("Los igresos que generas son $%.2f\n",ingreso);
printf("El impuesto que se te cobra es $%.2f\n",impuesto);
printf("Tu sueldo real es $%.2f\n",neto);

  system("PAUSE");	
  return 0;
}
