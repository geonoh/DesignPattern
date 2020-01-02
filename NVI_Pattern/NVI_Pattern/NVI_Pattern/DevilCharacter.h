#pragma once
#include "GameCharacter.h"

class DevilCharacter : public GameCharacter
{
public:
	DevilCharacter();
	virtual ~DevilCharacter();

	

private:
	void DoSkill()const override ;

};