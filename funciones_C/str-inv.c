

#include <stdlib.h>
#include "str-count.h"


char *strinv(char *v)
{
	unsigned long int l=strcount(v);
	unsigned long int x=0;
	char * aux=(char *)malloc(sizeof(char)*l);
	*(aux+l)='\0';
	l--;
	while(*(v+x)!='\0')
	{
	*(aux+l)=*(v+x);	
	l--;
	x++;	
	}
	
	
	
	
	free(v);
	return aux;
}
