#include "acional.h"
#include <iostream>

using namespace std;

Racional::Racional(void) :numerador(1), denominador(1) {

}

Racional::Racional(int _numerador, int _denominador)
	: numerador(_numerador), denominador(_denominador)
{

}

void Racional::imprimir_fraccion(void)
{
	reducir();
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado Indefinido\n";
		return;
	}
	else if (denominador == 0) {
		cout << "No se puede dividir entre cero\n";
		return;
	}

	cout << numerador << "/" << denominador << "\n";

}

void Racional::imprimir_flotante(void)
{
	reducir();
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado Indefinido\n";
		return;
	}
	else if (denominador == 0) {
		cout << "No se puede dividir entre cero\n";
		return;
	}


	cout << (float(numerador) / float(denominador)) << "\n";
}

int Racional::getMenorOperando(void) {

	return (numerador < denominador ? numerador : denominador);
}
void Racional::reducir(void) {

	for (int i = 2; i <= getMenorOperando(); i++) {
		if (numerador % i == 0 && denominador % i == 0) {
			this->numerador = this->numerador / i;
			this->denominador = this->denominador / i;
			i = 1;
		}
	}
}
Racional Racional::sumar(Racional fraccion)
{
	Racional resultado;

	if (fraccion.denominador == this->denominador)
	{
		resultado.setNumerador(this->numerador + fraccion.numerador);
		resultado.setDenominador(this->denominador);
	}
	else
	{
		resultado.setNumerador((this->numerador * fraccion.denominador)+(fraccion.numerador * this->denominador));
		resultado.setDenominador(this->denominador * fraccion.denominador);
	}

	return resultado;

}
Racional Racional::restar(Racional fraccion)
{
	Racional resultado;

	if (fraccion.denominador == this->denominador)
	{
		resultado.setNumerador(this->numerador - fraccion.numerador);
		resultado.setDenominador(this->denominador);
	}
	else
	{
		resultado.setNumerador((this->numerador * fraccion.denominador) - (fraccion.numerador * this->denominador));
		resultado.setDenominador(this->denominador * fraccion.denominador);
	}

	return resultado;

}
void Racional::dividir(Racional fraccion)
{
	if (fraccion.denominador == this->denominador)
	{

	}
	else
	{

	}

}

void Racional::setNumerador(int _numerador)
{
	this->numerador = _numerador;
}

void Racional::setDenominador(int _denominador)
{
	this->denominador = _denominador;
}
