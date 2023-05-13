#include<stdio.h>
#include<string.h>
/*Autor: Marcelo*/

int ME,ENT,MM,IGM,PA,PROM;

main (){
		printf("Ingresar peso del alumno:");
			scanf("%d",&PA);
	while (PA!=0){
		
				if (PA<50){
					ME=ME+1;
				}
					if (PA>=50 and PA<=60){
						ENT=ENT+1;
					}
						if (PA>=60 and PA<=80){
							MM=MM+1;
						}
							if (PA>=80){
								IGM=IGM+1;
							}
		printf("Ingresar peso del alumno:");
			scanf("%d",&PA);
	}
		PROM=ME+ENT+MM+IGM/4;
		printf("El peso de los alumnos menos de 50kg:%d \n",ME);
		printf("El peso de los alumnos entre 50kg y 60kg:%d \n",ENT);
		printf("El peso de los alumnos mas de 60kg y menos de 80kg:%d \n",MM);		
		printf("El peso de los alumnos igual o mas de 80kg:%d \n",IGM);
		printf("El promedio de peso de los alumnos es:%d \n",PROM);
}
