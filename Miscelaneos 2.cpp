#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/

int CAT,CV1,CV2,CV3,CV4,CV5,CONT1,CONT2,CONT3,CONT4,CONT5,TR;

int main (){
	
	printf("Ingresar categoria de vehiculo:");
		scanf("%d",&CAT);
while (CAT != 999){
		if(CAT==1){
			CV1=CV1+5000;
			CONT1=CONT1+1;
		}
			if (CAT==2){
				CV2=CV2+10000;
				CONT2=CONT2+1;
			}
				if (CAT==3){
					CV3=CV3+10000;
					CONT3=CONT3+1;
				}
					if (CAT==4){
						CV4=CV4+15000;
						CONT4=CONT4+1;
					}
						if (CAT==5){
							CV5=CV5+20000;
							CONT5=CONT5+1;
						}
	printf("Ingresar categoria de vehiculo:");
		scanf("%d",&CAT);
}
TR=CV1+CV2+CV3+CV4+CV5;
	printf("Total acumulado en la Categoria 1 es:%d \n",CV1);
	printf("Total acumulado en la Categoria 2 es:%d \n",CV2);
	printf("Total acumulado en la Categoria 3 es:%d \n",CV3);
	printf("Total acumulado en la Categoria 4 es:%d \n",CV4);
	printf("Total acumulado en la Categoria 5 es:%d \n",CV5);
		printf("Cantidad de Vehiculos Livianos ingresados:%d \n",CONT1);
		printf("Cantidad de Omnibus y Camiones con 2 ejes ingresados:%d \n",CONT2);
		printf("Cantidad de Vehiculos Livianos con Acoplados ingresados:%d \n",CONT3);
		printf("Cantidad de Camiones con tres ejes ingresados:%d \n",CONT4);
		printf("Cantidad de Camiones con mas de tres ejes ingresados:%d \n",CONT5);
			printf("El monto total de lo recaudado es:%d \n",TR);
}
