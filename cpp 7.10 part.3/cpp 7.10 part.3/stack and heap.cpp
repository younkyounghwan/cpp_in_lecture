#include <iostream>

using namespace std;
									//				stack							heap
void initArray()					//
{									//												sizeof(int) x 1000 
	int* ptr2 = new int[1000];		//													bytes
	//delete{} ptr2;				//				initArray()  ------> 함수를 호출해서 stack에 메모리를 쌓았고, heap에도 메모리 만들었다.
}									//				int* ptr2    ------> 하지만, stack의 변수는 지역변수이므로 os가 도중에 stack의 메모리값을 삭제한다.
									//				  main()	 ------> 따라서 그전에 stack의 주소값으로 이어진 heap의 메모리를 delete로써 삭제하지 않는다면
int main()							//							 ------> heap에는 메모리만 할당된 채 그 메모리를 찾을 방법이 없어진다. 이를 메모리 누수라고 한다.
{									
	initArray();					

	return 0;
}