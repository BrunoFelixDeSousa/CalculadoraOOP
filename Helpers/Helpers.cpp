#include "Helpers.h"
#include <iostream>

bool checkIfUserWantsToContinue()
{
	std::cout << "Fazer outro c�lculo? ('y' para sim): ";
	char escolha{};
	std::cin >> escolha;

	if (escolha == 'y' || escolha == 'Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}