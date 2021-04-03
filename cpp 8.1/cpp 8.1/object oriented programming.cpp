#include <iostream>
#include <string>
#include <vector>

using namespace std;
// object
//Friend : name, address, age, height, weight, ...
//			print()

class Friend 
{
public: // access specifier (public, private, protected)
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print() // struct에는 함수를 안넣는 것을 권장.
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
}; // data를 묶는데에만 쓸거면 struct를 쓰고 기능을 추가하고 싶다면 class를 사용한다.



//void print(const string& name, const string& address, const int& age,
//	const double& height, const double& weight)
//{
//	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
//}


int main()
{
	Friend jj = {"Jack jack", "Uptown", 2, 30, 10}; //instanciation, instance


	
	jj.print();
	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);

	vector<Friend> my_friends;
	my_friends.resize(3);

	my_friends[0].print();
	my_friends[1].print();
	my_friends[2].print();

	for (auto& e : my_friends) {
		e.print();
	}

	//vector <string> name_vec;
	//vector <string> addr_vec;
	//vector<int> age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


	return 0;
}