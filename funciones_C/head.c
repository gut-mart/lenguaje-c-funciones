
#include <stdio.h>
#include <stdlib.h>

char * head()
	
{
	//***********************************
	//*      Datos de la funcion        *
	//***********************************
	//char nombreFuncion[]="head";
	//char tipoFuncion[]="puntero";
	//***********************************
	unsigned int         longTipo=sizeof(char);
	char             *puntero_aux=(char *)malloc(longTipo*0);
	               *(puntero_aux)='\0';
		 
		
		 
	return puntero_aux;
	
	
}
