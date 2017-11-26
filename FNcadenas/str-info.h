#ifndef STRINFO_H
#define STRINFO_H
 void strinfo(const char *p);

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
	
	printf("\nNumero de elementos: %lu",contador);
}
#endif
