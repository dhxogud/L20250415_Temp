#include "APlayerCharacter.h"

void APlayerCharacter::Move(int X, int Y)
{
	// �÷��̾� �ɸ����� ������
}
void APlayerCharacter::Attack(AAttackCharacter opposite)
{
	opposite.Hit(Damage);
	// �÷��̾ ���͸� �����Ѵ�.
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