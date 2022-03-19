/*
 ============================================================================
 Name        : Laboratorio.c
 Author      : Analia Cazal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c; //control de salida
	char fuente[21]; //ingreso por el usuario
	char operadores[4]; // vector de operadores
	scanf("%20[0-9,*,/,\\-,+]s", fuente); //impresion de los operadores, para reconocer el negativo hay que poner \\ al lado del negativo
	printf("%s", fuente); // impresion del array de operadores
	while((c=getchar()) != '\n' && c!= EOF); // limpieza del buffer
	while(c!=-1){
			switch()
		/*ingresa por teclado
		 * ingreso al vector
		 * scaneo por scanf
		 * impresion por medio de printf del vector
		 * limpieza del buffer cuidando el desborde
		 * entra al bucle
		 * que me pide el ejercicio;
		 * puede ingresar 20 caracteres de corrido sin presedencia, restrinccion; 0-9, operadores; mas menos mult divi
		 * busca el caso del usuario por medio del switch (no se como implementar)
		 * al saber el caso del usuario por medio de un if comparar si es menor o igual a 10 arroglar el resultado en letras de lo contrario devolver su valor numerico
		 * por medio de un bucle seguir el programa (no se como plantear) pero se agregan printf y banderas
		 *
		 *
		 *
		 */
	}
	return EXIT_SUCCESS;
}
