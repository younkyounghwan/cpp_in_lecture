#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	Monster monster("gozilla", Position2D(1, 2));
	{
		monster.moveTo(Position2D(1, 1));

		cout << monster << endl;
	}
	return 0;
}