#include <iostream>
#include "Resource.h"

//void soSomething(std::unique_ptr<Resource> res)
//{
//
//}

using namespace std;

int main()
{
	//soSomething(std::unique_ptr<Resource>(new Resource(10000000)));
	//soSomething(std::make_unique<Resource>(10000000));
	//Resource* res = new Resource(3);
	//res->setAll(1);
	{
		//std::shared_ptr<Resource> ptr1(res);

	
		auto ptr1 = std::make_shared<Resource>(3);
		ptr1->setAll(1);

		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res);
			
			auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}
		
		ptr1->print();
		std::cout << "Going out of the block" << std::endl;
	}

	std::getchar();

	return 0;
}