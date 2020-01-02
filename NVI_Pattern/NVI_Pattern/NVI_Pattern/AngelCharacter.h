#pragma once
#include "GameCharacter.h"

class AngelCharacter : public GameCharacter
{
public:

	AngelCharacter();
	virtual ~AngelCharacter();

	

private:
	void DoSkill()const override ;

};