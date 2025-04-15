#include "AGoblin.h"

void AGoblin::Move(int X, int Y)
{
	// 고블린의 움직임 = 뛰어다닌다
}
void AGoblin::Attack(AAttackCharacter opposite)
{
	// 고블린이 상대방을 때린다
	opposite.Hit(Damage);
}