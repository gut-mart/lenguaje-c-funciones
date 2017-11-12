


char *cambio_base(int,int);
int resto_division(int);
int dato_division(int);

char *cambio_base( int valor_dato , int valor_base )
{
	char *direccion=NULL;
	int dato=valor_dato;
	int base=valor_base;
	int resto =dato;
	char cadena[1000];
	int contador=0;
	
	while(dato>=base)
	{
		resto=dato%base;
		dato=dato/base;
		
		
		cadena[contador]=resto_division(resto);
		//printf("%c",cadena[contador]);
		contador++;
		
		
	}
	
	cadena[contador]=dato_division(dato);
	//printf("%c",cadena[contador]);
	
	// *************invertir orden ************
	int s=contador;
	int x=0;
	char cadenaSalida[s+1];//Mas NULL
	cadenaSalida[s+1]='\0';
	while(s>=0)
	{
		cadenaSalida[x]=cadena[s];
		s=s-1;
		x++;
		// --------comprobación--------------
		//printf("\n%i",x);
	}
	// --------comprobación--------------
	//printf("\n%s",cadenaSalida);
	direccion=cadenaSalida;
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
