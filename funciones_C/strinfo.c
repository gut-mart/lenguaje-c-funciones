

#include <stdio.h>

void strinfo(const char *p) 
{
	unsigned long int contador=0;
	
	while((*p)!='\0')
	{
		printf("\nDireccion >%p ",p);
		printf(">>%c",*(p));
		p++;
		contador++;
	}
	
	printf("\nNumero de elementos: %lu\n\n",contador);
}
