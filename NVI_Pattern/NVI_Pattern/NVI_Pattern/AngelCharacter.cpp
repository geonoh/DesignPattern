#include "AngelCharacter.h"
#include <iostream>

AngelCharacter::AngelCharacter()
{
	std::cout << "AngelCharacter has been Called()\n\n\n";
}

AngelCharacter::~AngelCharacter()
{
	std::cout << "AngelCharacter has been Destroyed()\n\n\n" ;

}

void AngelCharacter::DoSkill()const
{
	std::cout << "AngelCharacter's Skill - Healing !!\n\n\n";
}
