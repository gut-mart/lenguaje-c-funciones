#include  <stdio.h>
#include  <stdlib.h>
#include "str-copy.h"
#include "estructura.h"

void iniciarvector()

{

	//**************************************************************************
	//  pedir espacio al head para el primer inicilizar el vector p_historia
	//**************************************************************************
	
	
	registro *puntero_aux=(registro*)malloc(sizeof(registro));
	
	if  (puntero_aux==NULL)
	{
		printf("ERROR!!!");
		printf("Hubo un error en la asignacion de memoria");
	}
	    p_historia=puntero_aux;
	    p_historia->direccion           =(registro *)p_historia;
	    p_historia->longBytes           =sizeof(registro);
		p_historia->longTipo            =sizeof(registro);
	
	    strcopy(p_historia->nombreFuncion,"IniciarVector");
	    strcopy(p_historia->nombrePuntero,"p_historia"   );
	    strcopy(p_historia->tipo,"registro");
	
	
	


}	
