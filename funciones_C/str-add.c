



char *stradd(char *v1,const char *v2)
{
	unsigned long int x=strcount(v1); // longitud del puntero v1
	unsigned long int r=strcount(v2); // longitud del puntero v2
	
	
		char * puntero;
		       puntero=realloc(v1,sizeof(char)*(x+r));
		       puntero[x+r]='\0';
		while(*(v2)!='\0')
		{
			*(puntero+x)=*(v2);
			   x++;
			  v2++;
		}
		      
	
	
	
	return puntero;
}
