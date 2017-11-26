//             ESTA FUNCION
// CUENTA LOS DATOS UBICADOS EN EL VECTOR 
// EL VECTOR COMIENZA EN LA DIRECCION SUMINISTRADA POR EL PARAMETRO.
// DEVUEVE UN LONG INT SIN SIGNO

#ifndef STRCOUNT_H
#define STRCOUNT_H 

/*unsigned long int strcount(const char *v);*///


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
