#include<stdio.h>
#include<iostream>
/*Autor: Marcelo*/

int CCI,NCH,CCN,CCE,ACN,ACE,CONTN,CONTE,PT,CGI;
char TG;
main (){
	printf("Ingresar nro. de chapa del trasganado:");
		scanf("%d",NCH);
			while (NCH != 9999){
				CCI=CCI+1;
	printf("Ingresar tipo de ganado (N=Normal,E=Especial):");
		scanf("%s",TG);
			if (TG=='N'){
				CCN=70*500000;
				CONTN=CONTN+1;
				ACN=ACN+CCN;
			}
				if (TG=='E'){
					CCE=60*600000;
					CONTE=CONTE+1;
					ACE=ACE+CCE;
				}
	printf("Ingresar nro. de chapa del trasganado:");
		scanf("%d",NCH);
			}
			PT=ACN+ACE;
			CGI=CONTN+CONTE;
	printf("Cantidad de camiones ingresados:");
		scanf("%d",CCI);
	printf("Pago total por todos los ganados:");
		scanf("%d",PT);
	printf("Cantidad de ganado ingresado:");
		scanf("%d",CGI);
}
