#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/

int CANP,PRECIO,CLIV,VTLI;
char NOMLI,AUTOR;
int D=1;
int STK=1200;

main (){
	while (D<=31){
		printf("Ingresar nombre del libro:");
			scanf("%s",&NOMLI);
		printf("Ingresar cantidad de paginas:");
			scanf("%d",&CANP);
		printf("Ingresar precio:");
			scanf("%d",&PRECIO);
		printf("Ingresar autor:");
			scanf("%s",&AUTOR);
				CLIV=CLIV+1;
				VTLI=VTLI+PRECIO;
				STK=STK-1;
					if (STK=0){
		printf("El libro tiene stock 0\n");
					}
					D=D+1;
	}
		printf("Cantidad de libros vendidos:%d \n",CLIV);
		printf("Total recaudado en venta:%d \n",VTLI);
}
