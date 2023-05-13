#include"iostream"
#include<string.h>
#include<stdio.h>
/*Autor: Marce*/
/*ejercicio 1 del 28/08/17*/
using namespace std;
main()
{

int pun,ci,prom,cont,acum=0;
char nom [30];

	printf("Ingresar nro. de C.I.:");
		scanf("%d",&ci);
while (ci != 9999999){
	printf("Ingresar Nombre:");
		scanf("%s",&nom);
	printf("Ingresar Puntaje:");
		scanf("%d",&pun);
		acum=acum+pun;
		cont=cont+1;
	printf("Ingresar nro. de C.I.:");
		scanf("%d",&ci);
}
		prom=acum/cont;
	printf("El promedio de puntaje es:%d \n",prom);
	printf("La cantidad de datos cargado es:%d \n",cont);
}
