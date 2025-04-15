#pragma once
#include "AAttackCharacter.h"

class ABoar : public AAttackCharacter
{
public:
	void Move(int X, int Y);
	void Attack(AAttackCharacter opposite);
};

