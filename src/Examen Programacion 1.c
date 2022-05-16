/*
 ============================================================================
 Name        : Examen.c
 Author      : Keumurdji Rizzuti ivan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.

 2. Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer parámetro, un carácter como segundo y otro carácter  como tercero,  la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero y devolver la cantidad de veces que se reemplazo ese carácter  en la cadena

 3. Dada la siguiente estructura generar una función que permita ordenar un array de dicha estructura por tipo. Ante igualdad de tipo deberá ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct{
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;

float aplicarAumento(float precio);
int reemplazarCaracter(char cadena[], char caracterUno, char caracterDos);
int main(void) {

	float precio = 100;
	float precioAumetado;
	char cadena[21]="ivan";

	eVacuna vacunas[3]={
			{1, "VacunaA", "A", 60},
			{2, "VacunaB", "A", 90}
	};



	setbuf(stdin,NULL);

	precioAumetado=aplicarAumento(precio);
	printf("precio aumentado= %f", precioAumetado);
	if(reemplazarCaracter(cadena, 'a', 'e')==0){
		printf("\nNo se pudo aplicar el reemplazo");
	}



	return EXIT_SUCCESS;
}


float aplicarAumento(float precio){

	if(precio>0){
		precio = precio + ((precio*5)/100);
	}
	else{
		printf("\nNo se pudo aplicar el aumento");
	}


	return precio;
}
int reemplazarCaracter(char cadena[], char caracterUno, char caracterDos){
	int cantRep=0;
	int largoCadena;
	largoCadena = strlen(cadena);

	if(largoCadena>0 && ((caracterUno >='A' && caracterUno <='Z') || (caracterDos >='A' && caracterDos <='Z') || (caracterUno >='a' && caracterUno <='z') || (caracterDos >='a' && caracterDos <='z'))){

		for(int i=0; i<largoCadena;i++){

			if(cadena[i]==caracterUno){
				cadena[i] = caracterDos;
				cantRep++;
			}
		}

	}


	return cantRep;
}
int ordenarArray(eVacuna vacunas[], int tam){
	int kay=0;

	if(vacunas!=NULL && tam>0){

		for(int i=0; i<tam-1;i++){

			for(int j=i+1; i<tam;i++){

				if(strcpy(vacunas[j].tipo, vacunas[i].tipo)<0){

				}
			}
		}


		kay=1;
	}


	return kay;
}
