#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {
private:
	int numerador, denominador;
	int getMenorOperando(void);
	void reducir(void);
public:
	Racional(void);
	Racional(int, int);
	void imprimir_fraccion(void);
	void imprimir_flotante(void);

	void setNumerador(int);
	void setDenominador(int);

	Racional sumar(Racional);
	Racional restar(Racional);
	Racional dividir(Racional);
	Racional multiplicar(Racional);
};

#endif
