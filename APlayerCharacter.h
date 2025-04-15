#pragma once

#include "AAttackCharacter.h"

class APlayerCharacter : public AAttackCharacter
{
private:
	int Gold = 0;

public:
	void Move(int X, int Y);
	void Attack(AAttackCharacter opposite);

	int GetGold();
	void SetGold(int Gold);
};

