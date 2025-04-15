#include "ABoar.h"

void ABoar::Move(int X, int Y)
{
	// 곰의 움직임
}
void ABoar::Attack(AAttackCharacter opposite)
{
	// 곰이 상대방을 들이박는다
	opposite.Hit(Damage);
}