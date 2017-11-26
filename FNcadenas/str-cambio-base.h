#ifndef STRCAMBIOBASE_H
#define STRCAMBIOBASE_H


//char *strcambiobase(int,int);
int resto_division(int);
int dato_division(int);

char *strcambiobase(int valor_dato ,int valor_base )
{
	char *direccion=NULL;
	int dato=valor_dato;
	int base=valor_base;
	int resto =dato;
	char *cadena=NULL;
	int contador=0;
	
	while(dato>=base)
	{
		resto=dato%base;
		dato=dato/base;
		cadena=stradd(cadena,(char)resto_division(resto));
		contador++;
				
	}
	
	   cadena=stradd(cadena,(char)dato_division(dato));
	   direccion=strinv(cadena);
	return direccion;
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
#endif
