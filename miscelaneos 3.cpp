#include<stdio.h>
/*Autor: Marcelo*/

main (){
	int i,NUM,MULT;
		printf("Ingresar nro. entero:");
			scanf("%d",&NUM);
			for(int i= 1 ; i<= 10; i++){
				MULT= NUM*i;
	printf("La multiplicacion por:%d \n",i);
	printf("La multiplicacion es:%d \n",MULT);
	}
}
