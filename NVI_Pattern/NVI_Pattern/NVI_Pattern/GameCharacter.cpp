#include "GameCharacter.h"
#include <iostream>

GameCharacter::GameCharacter()
{

	std::cout << "GameCharacter has been Called\n\n\n";

}

GameCharacter::~GameCharacter()
{
	std::cout << "GameCharacter has been Destroy\n\n\n" ;
}

void GameCharacter::Control() 
{
	DoPreWork();

	DoSkill();			//overriding Function Call;

	DoPostWork();
}

void GameCharacter::DoPreWork() 
{
	std::cout << "Do Prework Before Skill Call()\n\n\n";

}
void GameCharacter::DoPostWork() 
{
	std::cout << "Do Postwork Before Skill Call()\n\n\n";

}

