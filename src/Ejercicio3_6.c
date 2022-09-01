/*
 ============================================================================
 Name        : Ejercicio3_6.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio3_6 (Funciones)
 Description :

Realizar un programa que:
asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 ============================================================================
 */

float realizarDescuento(int numero, int numeroDescuento);
int ingresarNumero();
int validarNumero(int numero);

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	int numero;
	float descuento;
	float descuentoFinal;

	numero = ingresarNumero();
	descuento = realizarDescuento(numero, 5);
	descuentoFinal = numero - descuento;

	printf("El descuento del numero %d es de %.2f - numero final : %.2f", numero, descuento, descuentoFinal);

	return 0;
}

int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero (10-100) : ");
	scanf("%d", &numero);

	numero = validarNumero(numero);

	return numero;
}

int validarNumero(int numero)
{
	while(numero < 10 || numero > 100)
	{
		printf("Error - Ingrese un numero valido (10-100) : ");
		scanf("%d", &numero);
	}

	return numero;
}


float realizarDescuento(int numero, int numeroDescuento)
{
	float descuento;

	descuento = (float)(numeroDescuento * numero) / 100;

	return descuento;
}
