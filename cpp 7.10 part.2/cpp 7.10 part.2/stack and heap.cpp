#include <iostream>
								//  stack�� ��������׿��� �޸𸮰� ��� ������ ������ ���� ���� �ݸ�,
								//  heap�� ����� ū ��ſ� �޸𸮰� ��� ������ �˱Ⱑ ���� ����.
using namespace std;			//
								//   Stack				    Heap
int main()						//
{								// 
	int* ptr = nullptr;			//					sizeof(int) x 1000000     ---------> int* ptr = nullptr; �� ���� Heap�� �޸𸮰� �Ҵ�ǰ�
	ptr = new int[1000000];		//							bytes             ---------> delete[] ptr ���� ���� Heap�� �Ҵ�� �޸𸮰� �����ȴ�.      
								//   main()  --------> delete���� ���� Heap�� �ִ� �޸𸮴� os�� ���� ȸ��������, stack���� ������ �޸𸮰� �Ҵ�Ǿ� �ִ�.
	delete[] ptr;				//   int*ptr --------> ���� stack�� �ִ� �޸𸮸� �̿��Ͽ� de-referencing�� �ϰԵǸ� ������ �߻��Ѵ�.
								//
	ptr = nullptr;				//   �׷��Ƿ� stack�� �ִ� �޸𸮸� �������ֱ� ���ؼ� nullptr�� �ʱ�ȭ�Ѵ�.

	return 0;

}