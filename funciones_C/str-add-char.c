

#include <stdio.h>
#include <stdlib.h>
#include "str-count.h"


char *straddchar(char *v,const char caracter)
{
	
		int x=strcount(v)+1; // longitud del puntero
		
	    char* puntero=(char *)realloc(v,(x)*sizeof(char));
			  *(puntero+x)='\0';
		      *(puntero+(x-1))=caracter;
	
	
	return puntero;
}
