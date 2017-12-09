



void strcopy(char *v1, const char *v2)
{
	unsigned long int x=0; // longitud del puntero v1
	
	
	while(*(v2)!='\0')
	{
		*(v1+x)=*(v2);
		x++;
		v2++;
	}
	
	
	
	
}
