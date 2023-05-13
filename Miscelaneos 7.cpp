#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/

int CODV,NROF,MTV,PC,V1,V2,CT1,CT2,TV1,TV2,TVA,D;
char NOM [30];

int main(){
	
	while (D<=24){
		printf("Ingresar codigo vendedor:");
			scanf("%d",&CODV);
				if (CODV=1){
		printf("Ingresar Nombre:");
			scanf("%s",&NOM);
		printf("Ingresar nro. de factura:");
			scanf("%d",&NROF);
		printf("Ingresar monto total de venta:");
			scanf("%d",&MTV);
		printf("Ingresar porcentaje comision:");
			scanf("%d",&PC);
				if (D==1 or D==8 or D==15 or D==22){
					V1=V1+MTV;
				} 
				TV1=TV1+MTV;
				CT1=CT1+((MTV*PC)/100);
				}
					if (CODV=2){
		printf("Ingresar Nombre:");
			scanf("%s",&NOM);
		printf("Ingresar nro. de factura:");
			scanf("%d",&NROF);
		printf("Ingresar monto total de venta:");
			scanf("%d",&MTV);
		printf("Ingresar porcentaje comision:");
			scanf("%d",&PC);
				if (D==1 or D==8 or D==15 or D==22){
					V2=V2+MTV;
				}
				TV2=TV2+MTV;
				CT2=CT2+((MTV*PC)/100);				
					}
					D=D+1;
	}
		TVA=TV1+TV2;
		printf("La venta de los dias Lunes: %d \n",V1,V2);
		printf("La comision total de cada mes: %d \n",CT1,CT2);
		printf("El total de ventas: %d \n",TVA);
}
