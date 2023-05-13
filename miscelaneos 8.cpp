#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/

int CODC,MPS,MP,MA,TR,CA,C;
char NOM;
int M=1;

main (){
		for(int C= 1 ; C<= 1500; C++){
			C=C+1;
		printf("Ingresar codigo de cliente:");
			scanf("%d",&CODC);
		printf("Ingresar nombre:");
			scanf("%s",&NOM);
		printf("Ingresar monto de pago por el seguro:");
			scanf("%d",&MPS);
		printf("Ingresar mes de pago:");
			scanf("%d",&MP);
		printf("Ingresar mes de accidente:");
			scanf("%d",&MA);
				MA=1;
					if (MA!=0 and MA<=12){
						MA=MA+1;
						CA=CA+1;
					}
						TR=TR+MPS;
							if (MA=0){
		printf("No hay accidentes registrados %d \n");
							}
						C=C+1;
		}
		printf("El total recaudado en el año:%d \n",TR);
		printf("El total de accidentes es:%d \n",CA);
}
