#include <iostream>

using namespace std;
									//				stack							heap
void initArray()					//
{									//												sizeof(int) x 1000 
	int* ptr2 = new int[1000];		//													bytes
	//delete{} ptr2;				//				initArray()  ------> �Լ��� ȣ���ؼ� stack�� �޸𸮸� �׾Ұ�, heap���� �޸� �������.
}									//				int* ptr2    ------> ������, stack�� ������ ���������̹Ƿ� os�� ���߿� stack�� �޸𸮰��� �����Ѵ�.
									//				  main()	 ------> ���� ������ stack�� �ּҰ����� �̾��� heap�� �޸𸮸� delete�ν� �������� �ʴ´ٸ�
int main()							//							 ------> heap���� �޸𸮸� �Ҵ�� ä �� �޸𸮸� ã�� ����� ��������. �̸� �޸� ������� �Ѵ�.
{									
	initArray();					

	return 0;
}