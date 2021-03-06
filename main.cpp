// CalculadoraOOP.cpp: define o ponto de entrada para o aplicativo.

#include <iostream>

#include "Calculadora/Calculadora.h"
#include "Helpers/helpers.h"

int main()
{
	Calculadora calc;

	bool start = true;

	while (start)
	{
		// inicio
		calc.Run();

		// se for verdadeiro, o while irá se repetir
		start = checkIfUserWantsToContinue();
	}
	
	std::cout << &calc;

	return 0;
}
