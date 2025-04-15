#include "APlayerCharacter.h"

void APlayerCharacter::Move(int X, int Y)
{
	// 플레이어 케릭터의 움직임
}
void APlayerCharacter::Attack(AAttackCharacter opposite)
{
	opposite.Hit(Damage);
	// 플레이어가 몬스터를 공격한다.
	if (opposite.HP <= 0)
	{
		Gold += 10;
	}
}

int APlayerCharacter::GetGold()
{
	return this->Gold;
}

void APlayerCharacter::SetGold(int Gold)
{
	this->Gold = Gold;
}