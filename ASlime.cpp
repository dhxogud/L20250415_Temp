#include "ASlime.h"


void ASlime::Move(int X, int Y)
{
	// �������� �̲������鼭 �̵��Ѵ�.
}
void ASlime::Attack(AAttackCharacter opposite)
{
	// �������� ������ �����Ѵ�
	opposite.Hit(Damage);
}