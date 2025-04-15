#include "AAttackCharacter.h"

void AAttackCharacter::Move(int X, int Y)
{

}
void AAttackCharacter::Attack(AAttackCharacter opposite)
{
	opposite.Hit(Damage);
	// 상대방에게 공격!
}
void AAttackCharacter::Hit(int Damage)
{
	// 공격 받음
}