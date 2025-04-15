#pragma once

#include "AActor.h"
class AAttackCharacter : public AActor
{

public:
	int HP = 10;
	int MP = 10;
	int Damage = 1;

	void Move(int X, int Y);
	void Attack(AAttackCharacter opposite);
	void Hit(int Damage);
};

