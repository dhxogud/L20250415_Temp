#pragma once

#include "AAttackCharacter.h"

class AGoblin : public AAttackCharacter
{
public:
	void Move(int X, int Y);
	void Attack(AAttackCharacter opposite);
};

