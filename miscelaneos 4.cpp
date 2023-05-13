#include"iostream"
#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/
int CP,GF,GC,TGF,TGC,PTO,PG;
char RESUL,EC;

main (){
	
while (CP <= 9){
	printf("Ingresar equipo contrincante:");
		scanf("%s",&EC);
	printf("Ingresar resultado(G=Gano,E=Empato,P=Perdio):");
		scanf("%s",&RESUL);
	printf("Ingresar goles a favor:");
		scanf("%d",&GF);
	printf("Ingresar goles en contra:");
		scanf("%d",&GC);
			if (RESUL=='G'){
				PTO=PTO+3;
			}
				if (RESUL=='E'){
					PTO=PTO+1;
				}
					if (RESUL=='P'){
						PTO=PTO+0;
					}
			TGF=TGF+GF;
			TGC=TGC+GC;
			CP=CP+1;
	}
		PG=(TGF+GC)/9;
	printf("Total de goles a favor:%d \n",TGF);
	printf("Total de gooles en contra:%d \n",TGC);
	printf("Puntaje obtenido:%d \n",PTO);
	printf("promedio de goles:%d \n",PG);
}
