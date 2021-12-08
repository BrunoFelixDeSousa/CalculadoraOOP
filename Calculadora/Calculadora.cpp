#include "Calculadora.h"
#include <iostream>

Calculadora::Calculadora()
{
	firstNumber  = 0;
	secondNumber = 0;
	_choice      = INVALID;
}

void Calculadora::Run()
{
	_choice = CHOICE::INVALID;

	while (_choice == CHOICE::INVALID)
	{
		int choice = 0;
		std::cout << "pressione 1 para somar, 2 para subtrair, 3 para multiplicar, 4 para dividir, 5 para ver os resultados anteriores: ";
		std::cin >> choice;

		if (choice > 0 && choice < 6)
		{
			_choice = static_cast<CHOICE>(choice);
		}
		else
		{
			std::cout << "Entrada invalida de \'" << choice << "\' - tente novamente.\n";

		}
	}

	switch (_choice)
	{
	case ADD:
	{
		std::cout << "( + ) - Somar!\n";
		getEntries();
		float result = firstNumber + secondNumber;
		std::cout << "Resultado: " << firstNumber << " + " << secondNumber << " = " << result << std::endl;
		pastResults.push_back(result);
	}		
		break;
	case SUBTRACT:
		std::cout << "( - ) - Subtrair!\n";
		getEntries();
		std::cout << "resultado: " << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << std::endl;
		pastResults.push_back(firstNumber - secondNumber);
		break;
	case MULTIPLY:
		std::cout << "( * ) - Multiplpicar!\n";
		getEntries();
		std::cout << "resultado: " << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << std::endl;
		pastResults.push_back(firstNumber * secondNumber);
		break;
	case DIVIDE:
		std::cout << "( / ) - Dividir!\n";
		do
		{
			getEntries();
			if (secondNumber < 0.000000001 && secondNumber > -0.000000001)
			{
				std::cout << "nao pode dividir por 0, tente novamente com o segundo numero\n";
			}
		} while (secondNumber < 0.000000001 && secondNumber > -0.000000001);
		std::cout << "resultado: " << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
		pastResults.push_back(firstNumber / secondNumber);
		break;
	case SEE_PAST:
		std::cout << this;
		break;
	default:
		std::cout << "Escolha invalida\n";
		//break;
	}
}

void Calculadora::getEntries()
{
	std::cout << "Insira o primeiro numero: ";
	std::cin >> firstNumber;
	std::cout << "Insira o segundo numero: ";
	std::cin >> secondNumber;
}

void Calculadora::seePastResults()
{
	if (pastResults.empty())
	{
		std::cout << "Nunhum resultado encontrado.\n";
		return;
	}

	for (auto past : pastResults)
	{
		std::cout << past << ", ";
	}
}

Calculadora& Calculadora::operator<<(Calculadora& calc)
{
	if (pastResults.empty())
	{
		std::cout << "Nunhum resultado encontrado.\n";
		return *this;
	}

	for (auto past : pastResults)
	{
		std::cout << past << ", ";
	}

	return *this;

}