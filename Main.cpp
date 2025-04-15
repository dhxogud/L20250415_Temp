#include <iostream>
#include "APlayerCharacter.h"
#include "AGoblin.h"
#include "ABoar.h"
#include "ASlime.h"
#include <vector>

using namespace std;

int main()
{
	std::vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);
	IntArray.push_back(4);
	IntArray.push_back(5);
	IntArray.push_back(6);
	IntArray.push_back(7);
	IntArray.erase(find(IntArray.begin(), IntArray.end(), 2));
	IntArray.clear();

	for (int i = 0; i < IntArray.size(); i++)
	{
		cout << IntArray[i] << endl;
	}

	for (auto data : IntArray)
	{
		cout << data << endl;
	}

	return 0;
}

