#include "AAttackCharacter.h"

void AAttackCharacter::Move(int X, int Y)
{

}
void AAttackCharacter::Attack(AAttackCharacter opposite)
{
	opposite.Hit(Damage);
	// ���濡�� ����!
}
void AAttackCharacter::Hit(int Damage)
{
	// ���� ����
}