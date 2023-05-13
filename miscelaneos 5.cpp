#include "iostream"
#include <string.h>
#include <stdio.h>
/*Programador: Marce*/

using namespace std;
main ()
{
int t,ac,ma,hme,me,pt,ct=0;
ct=1;
	printf("Ingrese temperatura %d:",ct,"%s : ");
		scanf("%d",&t);
ma=t;
me=t;
hme=1;
	while (ct<=6){
		ac=ac+t;
		if (t>ma){
			ma=t;
		}
			if (t<me){
				me=t;
				hme=ct;
			}
			ct=ct+1;
	printf("Ingrese temperatura %d:",ct);
		scanf("%d",&t);
	
	}
	 pt=ac/6;
	printf("\n El promedio de temperatura es: %d ",pt);
	printf("\n La mayor temperatura registrada es: %d ",ma);
	printf("\n La menor temperatura se registro a la hora: %d ", hme);
}
	

