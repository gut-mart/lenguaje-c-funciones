//                         ESTA FUNCION 
// RECIBE DOS PARAMETROS , UN PUNTERO AL QUE SE AÑADIRA EL DATO PASADO
// EN EL OTRO PARAMETRO QUE ES DE TIPO CHAR
// DEVUELVE UNA DIRECCION DONDE ESTA LA INFORMACION QUE SE A AÑADIDO AL VECTOR 
// EN ESTA OPERACION SE RESERVA MEMORIA CON LA FUNCION MALLOC() ,CON LO CUAL,UNA 
// SE DEJE DE UTILIZAR SE DEBE LIBERAR EL PUNTERO CON FREE()          

#ifndef STRADD_H
#define STRADD_H
char *stradd( char *v,const char caracter);



 
 char *stradd(char *v,const char caracter)
{
	 char *puntero=NULL;//puntero interno para operaciones;
	 
	 if ((v)==NULL) // comprobar si el v esta inicicializado
	 {
		 puntero=malloc(sizeof(char)*2);
		 puntero[0]=caracter;
		 puntero[1]='\0';
	 }
	 else
	 {
		 int x=strcount(v); // longitud del puntero
		      puntero=realloc(v,(x+2)*sizeof(char));
			  puntero[x+1]='\0';
			  puntero[x]=caracter;
	 }
    
	 
	 return puntero;
}
#endif
