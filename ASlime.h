#pragma once

#include "AAttackCharacter.h"
class ASlime : public AAttackCharacter
{
public:
	void Move(int X, int Y);
	void Attack(AAttackCharacter opposite);
};

