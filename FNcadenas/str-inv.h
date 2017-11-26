#ifndef STRINV_H
#define STRINV_H


char *strinv(char *v)
{
	
	int longitud=strcount(v);
	char vector[longitud];
	int x=0;
	int z=0;
	for( x=0;x<=longitud;x++)
	{
		vector[x]=v[x];
	}
	
	
	for( x=longitud-1;x>=0;x--)
	{
		v[x]=vector[z];
		z++;
	}
	
	return v;
}

#endif
