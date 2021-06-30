#include "Resource.h"
#include <memory>

using namespace std;

auto doSomething()
{
	//auto res1 = std::make_unique<Resource>(5);
	//return res1;
	
	//return std::unique_ptr<Resource>(new Resource(5));

	return std::make_unique<Resource>(5);
}

//auto doSomething2(std::unique_ptr<Resource> res)
void doSomething2(Resource * res)
{
	res->setAll(10);
	res->print();

	//return res;
}

int main()
{
	//{
		//Resource* res = new Resource(10000000);

		//std::unique_ptr<Resource> res(new Resource(10000000));

		// early return or throw

		//delete res;
	//}

	//{
	//	std::unique_ptr<int> upi(new int);

	//	//auto* ptr = new Resource(5);
	//	
	//	//std::unique_ptr<Resource> res1(new Resource(5));
	//	//auto res1 = std::make_unique<Resource>(5);
	//	auto res1 = doSomething();

	//	res1->setAll(5);
	//	res1->print();

	//	std::unique_ptr<Resource> res2;

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;

	//	//res2 = res1; unique pointer는 복사가 안된다. 소유권이 여러곳에 있으면 안된다는 이론
	//	res2 = std::move(res1);

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	std::cout << static_cast<bool>(res2) << std::endl;
	//
	//	if (res1 != nullptr) res1->print();
	//	if (res2 != nullptr) res2->print(); // (*res2).print();
	//}

	//{
	//	auto res1 = std::make_unique<Resource>(5);
	//	res1->setAll(1);
	//	res1->print();

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;

	//	res1 = std::move(doSomething2(std::move(res1)));
	//	//doSomething2(res1.get());

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;

	//	res1->print();
	//}

	//{
	//	auto res1 = std::make_unique<Resource>(5);
	//	res1->setAll(5);
	//	res1->print();

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;

	//	//res1 = doSomething2(std::move(res1));
	//	doSomething2(res1.get());

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl;
	//	res1->print();
	//}

	{
		Resource* res = new Resource;
		std::unique_ptr<Resource> res1(res);
		std::unique_ptr<Resource> res2(res); // x
	
		delete res; // x
	}

	return 0;
}