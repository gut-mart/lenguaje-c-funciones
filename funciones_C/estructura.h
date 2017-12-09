#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

typedef struct {
	
	char         tipo[20];
	unsigned int longTipo;
	void        *direccion;
	char         nombrePuntero[20];
	char         nombreFuncion[20];
	char         tipoDato[20];
	unsigned int longBytes;
	
} registro;

 registro *p_historia;
 registro *puntero_aux;
 //registro historia;
 

#endif
