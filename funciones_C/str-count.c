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
