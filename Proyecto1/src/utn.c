#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int utn_getInt(int* pResultado, char * mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt>= minimo && bufferInt <=maximo)
			{
				*pResultado=bufferInt;
				retorno= 0;
				break;
			}
			else
			{
				printf("\n%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >=0);
	}
	return retorno;
}

int utn_getChar(char* pResultado, char * mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno=-1;
	char bufferChar;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c",&bufferChar);
			if(bufferChar>= minimo && bufferChar <=maximo)
			{
				*pResultado=bufferChar;
				retorno= 0;
				break;
			}
			else
			{
				printf("\n%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >=0);
	}
	return retorno;
}


