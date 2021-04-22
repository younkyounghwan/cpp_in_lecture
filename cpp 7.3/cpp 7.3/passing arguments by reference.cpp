// ������ ���� �ּ� ����

#include <iostream>
#include <cmath>  
using namespace std;

void addOne(int& y)
{
	cout << y << " " << &y << endl;

	y += 1;
} //call by reference

void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180 / 0;
	sin_out = sin(radians);
	cos_out = cos(radians);

}
typedef int* pint;
void foo(int* x) // parameter���� �Լ� ������ ������ ���� ��쿡�� const�� �ٿ� ��� �� ���� �ִ�.
{
	cout << x << endl;
}// shorteness of reference

void printElement(int (&arr)[4])//�����ϸ� vector�� ���
{

}

int main() 
{	
	

	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x); 
	cout << x << " " << &x << endl;
	
	cout << endl;

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	//foo(6); // ������ �ּҰ� ���� �Ф�

	x = 5;
	//int* ptr = &x;
	pint ptr = &x; // �̷��Ա��� �ؾߵǳ�...?


	foo(ptr);

	int arr[]{ 1,2,3,4 };

	printElement(arr);
	
	return 0;

}