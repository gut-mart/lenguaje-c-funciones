//copiar matriz en otra direcccion
//             ESTA FUNCION
// CUENTA LOS DATOS UBICADOS EN EL VECTOR 
// EL VECTOR COMIENZA EN LA DIRECCION SUMINISTRADA POR EL PARAMETRO.
// DEVUEVE UN LONG INT SIN SIGNO

#ifndef STRCOUNT_H
#define STRCOUNT_H 

/*unsigned long int strcount(const char *v);*/


unsigned long int strcount(const char *v)
{
	unsigned long int x=0;
	while (*(v)!='\0')
	{
		x++;
		v++;	
	}
	
	return x;	
	
}
#endif

#ifndef STRCOPY_H
#define STRCOPY_H



//void strcopy(const char *fuente ,char *destino)
{
	    unsigned long int longitudFuente,longitudDestino;
	                      longitudFuente=strcount(fuente);
	                      longitudDestino=strcount(destino);
	if(longitudFuente>longitudDestino)
	{
		printf("\nLa matriz fuente es mayor que la matriz destino.");
		printf("\nLa matriz destino se igualara con la matriz fuente en longitud.");
		printf("\nEl resto de datos de la matriz fuente se perderan.");
	}
	
	while((*fuente)!='\0' && (*destino)!='\0')
	{
		*destino=(*fuente);
		 fuente++;
	     destino++;
	}
	    
	    (*destino)='\0';
	}
	



#endif

