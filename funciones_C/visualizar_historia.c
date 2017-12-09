

#include <stdio.h>

#include "estructura.h"

void visualizar_historia()
{
	
	unsigned int numRegistros=p_historia->longBytes/p_historia->longTipo;
	unsigned int contador=0;
	printf("\n");
	printf(" Direccion  ");
	printf("   tipo     ");
	printf(" longTipo   ");
	printf(" longBytes ");
	printf("   nombreFuncion ");
	printf("   nombrePuntero ");
	printf("\n");
	printf("__________________________________________________________________________________");
	printf("\n");
	for(contador=0;contador<numRegistros;contador++)
	{
		printf(" %p",p_historia[contador].direccion);
		printf("   %s",p_historia[contador].tipo);
		printf("       %i",p_historia[contador].longTipo);
		printf("          %i",p_historia[contador].longBytes);
		printf("         %s",p_historia[contador].nombreFuncion);
		printf("     %s",p_historia[contador].nombrePuntero);
		
		
	}
	
}
