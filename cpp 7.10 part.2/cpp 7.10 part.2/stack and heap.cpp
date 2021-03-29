#include <iostream>
								//  stack은 차곡차곡쌓여서 메모리가 어디에 있을지 예측이 비교적 쉬운 반면,
								//  heap은 사이즈가 큰 대신에 메모리가 어디에 쌓일지 알기가 쉽지 않음.
using namespace std;			//
								//   Stack				    Heap
int main()						//
{								// 
	int* ptr = nullptr;			//					sizeof(int) x 1000000     ---------> int* ptr = nullptr; 로 인해 Heap에 메모리가 할당되고
	ptr = new int[1000000];		//							bytes             ---------> delete[] ptr 으로 인해 Heap에 할당된 메모리가 삭제된다.      
								//   main()  --------> delete으로 인해 Heap에 있는 메모리는 os에 의해 회수됐지만, stack에는 여전히 메모리가 할당되어 있다.
	delete[] ptr;				//   int*ptr --------> 따라서 stack에 있는 메모리를 이용하여 de-referencing을 하게되면 문제가 발생한다.
								//
	ptr = nullptr;				//   그러므로 stack에 있는 메모리를 정리해주기 위해서 nullptr로 초기화한다.

	return 0;

}