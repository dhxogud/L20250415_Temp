#include <iostream>
#include "APlayerCharacter.h"
#include "AGoblin.h"
#include "ABoar.h"
#include "ASlime.h"


using namespace std;

int main()
{

	APlayerCharacter MyPlayer = APlayerCharacter();
	ABoar MyBoar = ABoar();
	ASlime MySlime = ASlime();
	AGoblin MyGoblin = AGoblin();


	int DestX = 10;
	int DestY = 10;
	// 이동 가능
	MyPlayer.Move(10, 10);
	MyPlayer.Move(DestX, DestY);
	MyBoar.Move(DestX, DestY);
	MySlime.Move(DestX, DestY);
	MyGoblin.Move(DestX, DestY);

	// 공격 가능
	MyPlayer.Attack(MyBoar);
	MyBoar.Attack(MyPlayer);
	MySlime.Attack(MyPlayer);
	MyGoblin.Attack(MyPlayer);

	// 플레이어 골드 습득 가능
	int CurrentGold = MyPlayer.GetGold();
	MyPlayer.SetGold(CurrentGold + 10);

	return 0;
}

// 세상이 있습니다. 세상에는 플레이어와
// 몬스터가 있습니다. 몬스터는 고블린, 슬라임, 멧돼지가
// 있습니다. 고블린은 달릴 수 잇고 공격 가능합니다.
// 슬라임은 미끄러지고 공격 가능합니다.
// 멧돼지는 들이박고 공격이 가능합니다.
// 플레이어는 HP와 MP가 있고 공격이 가능하고
// 몬스터를 잡아서 골드를 모을 수 있습니다.

