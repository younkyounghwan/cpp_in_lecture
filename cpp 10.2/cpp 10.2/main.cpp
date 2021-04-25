// 구성관계

#include "monster.h"
using namespace std;

int main()
{
	Monster mon1("sanson", 0, 0);
	//while (1)
	{
		//event
		mon1.moveTo(1, 1);
		cout << mon1 << endl;
	}
	return 0;
}