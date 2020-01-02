#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include <iostream>
int main()
{
	{
		std::unique_ptr<GameCharacter> devil = std::make_unique<DevilCharacter>();

		devil->Control();
	}

	std::cout << "---------------------------------------------------------\n\n\n";
	{
		std::unique_ptr<GameCharacter> angel = std::make_unique<AngelCharacter>();

		angel->Control();
	}

}
