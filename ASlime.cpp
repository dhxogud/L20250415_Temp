#include "ASlime.h"


void ASlime::Move(int X, int Y)
{
	// 슬라임이 미끄러지면서 이동한다.
}
void ASlime::Attack(AAttackCharacter opposite)
{
	// 슬라임이 상대방을 공격한다
	opposite.Hit(Damage);
}