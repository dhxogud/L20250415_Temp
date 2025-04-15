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
	// �̵� ����
	MyPlayer.Move(10, 10);
	MyPlayer.Move(DestX, DestY);
	MyBoar.Move(DestX, DestY);
	MySlime.Move(DestX, DestY);
	MyGoblin.Move(DestX, DestY);

	// ���� ����
	MyPlayer.Attack(MyBoar);
	MyBoar.Attack(MyPlayer);
	MySlime.Attack(MyPlayer);
	MyGoblin.Attack(MyPlayer);

	// �÷��̾� ��� ���� ����
	int CurrentGold = MyPlayer.GetGold();
	MyPlayer.SetGold(CurrentGold + 10);

	return 0;
}

// ������ �ֽ��ϴ�. ���󿡴� �÷��̾��
// ���Ͱ� �ֽ��ϴ�. ���ʹ� ���, ������, �������
// �ֽ��ϴ�. ����� �޸� �� �հ� ���� �����մϴ�.
// �������� �̲������� ���� �����մϴ�.
// ������� ���̹ڰ� ������ �����մϴ�.
// �÷��̾�� HP�� MP�� �ְ� ������ �����ϰ�
// ���͸� ��Ƽ� ��带 ���� �� �ֽ��ϴ�.

