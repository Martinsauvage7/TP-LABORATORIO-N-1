#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>
#include <strings.h>

/*PEDIRLE AL USUARIO 5 EDADES Y LUEGO
 *IMPRIMIR LAS 5 EDADES, DEFINIR UN ARRAY DE 5 POSICIONES
 *USAR LA FUNCION UTN_GETNUMERO()PARA PEDIR LOS VALORES
 *
 */

int main(void)
{
	setbuf(stdout, NULL);
	char letra;
	int respuesta;

	respuesta= utn_getChar(&letra, "Letra?\n", "Error la letra debe ser desde A a J\n", 'A' , 'J' , 1);
	if(respuesta==0)
	{
		printf("La letra es : %c",letra );
	}
	else
	{
		printf("\nError. Reingrese");
	}
}






