#include "DevilCharacter.h"
#include <iostream>

DevilCharacter::DevilCharacter()
{
	std::cout << "DevilCharacter has been Called()\n\n\n";
}

DevilCharacter::~DevilCharacter()
{
	std::cout << "DevilCharacter has been Destroyed()\n\n\n" ;

}


void DevilCharacter::DoSkill()const
{
	std::cout << "DevilCharacter's Skill - Fireball !!\n\n\n";
}
