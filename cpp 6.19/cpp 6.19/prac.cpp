#pragma

void test()
{
	int row = 3;
	int col = 5;

	int* matrix = new int[row * col];

	delete matrix;
}