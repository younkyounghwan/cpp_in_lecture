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

	void print() // struct���� �Լ��� �ȳִ� ���� ����.
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
}; // data�� ���µ����� ���Ÿ� struct�� ���� ����� �߰��ϰ� �ʹٸ� class�� ����Ѵ�.



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