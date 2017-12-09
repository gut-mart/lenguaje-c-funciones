

#include "stdlib.h"
#include "estructura.h"


char * strclone(const char chr, const unsigned long int num_chr)
{
	
	char *puntero_aux=(char *)malloc(sizeof(char)*num_chr);
	
	     *(puntero_aux+num_chr)='\0';
	
	for(int x=0;x<num_chr;x++)
	{
		*(puntero_aux+x)=chr;
	}
	
	
	
	
	
	return puntero_aux;	
}
