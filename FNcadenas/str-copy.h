
#ifndef STRCOPY_H
#define STRCOPY_H
void strcopy(char * destino,const char *fuente)
{
	
	 while((*fuente)!='\0')
	 {
		*destino=*fuente; 
		  fuente++;
		  destino++;
	 }
	 *(destino)='\0';
}


#endif

