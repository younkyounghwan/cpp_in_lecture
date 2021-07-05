#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	map<int, char> container1;
	for (int i = 0; i < 10; ++i)
		container1.insert(make_pair(i, char(i + 65)));
	
	for (auto itr = container1.begin(); itr != container1.end(); ++itr)
		cout << itr->first << " " << itr->second << endl;

	vector<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i);


	vector<int>::const_iterator itr;
	itr = container.begin();
	while (itr != container.end())
	{
		cout << *itr << " ";

		++itr;
	}
	cout << endl;

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	// ¹Ø¿¡²¨°¡ ´õ ¸¹ÀÌ ¾²ÀÓ
	for (auto& e : container)
		cout << e << " ";
	cout << endl;

	return 0; 
}