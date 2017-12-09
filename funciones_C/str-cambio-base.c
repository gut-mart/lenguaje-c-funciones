
#include <stdlib.h>
#include "str-add-char.h"
#include "str-inv.h"

int resto_division(int);
int dato_division(int);

char *strcambiobase(int valor_dato ,int valor_base)
{
	char *cadena=(char *)malloc(sizeof(char)*0);
	     *(cadena)='\0';
	int   dato=valor_dato;
	int   base=valor_base;
	int   resto =dato;
	
	int   contador=0;
	
	while(dato>=base)
	{
		resto=dato%base;
		dato=dato/base;
		cadena=straddchar(cadena,(char)resto_division(resto));
		contador++;
		
	}
	
	cadena=straddchar(cadena,(char)dato_division(dato));
	cadena=strinv(cadena);
	return cadena;
}
int resto_division(int resto)
{
	if (resto>=0 && resto<=9)
	{
		return (48+resto);
	}
	if (resto>=10 && resto<=16)
	{
		return (65+(resto-10));
	}
	return 0;
}
int dato_division(int dato)
{
	if (dato>=0 && dato<=9)
	{
		return (48+dato);
	}
	if (dato>=10 && dato<=16)
	{
		return(65+(dato-10));
	}
	return 0;
}
