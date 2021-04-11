#include <iostream>

using namespace std;

class Something
{
public:

	class _init
	{
	public:
		_init()
		{
			s_value = 1024; // static member variable�� �ʱ�ȭ�ϴ� ���
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initailizer;

public:


	Something()
		:m_value(123) //, s_value(1024) // static member variable�� �����ڿ��� �ʱ�ȭ �� �� ����.  static constructor�� ������ �� ���°Ŵ�.
	{}
	static int getValue()
	{
		return s_value; //static������ this �����͸� ����� �� ����. - this�� �ؾ��ϴ� ��� ���� �ȵ�.

	}

	int temp() {
		return this->s_value;
	}

};

int Something::s_value = 1024;
Something::_init Something::s_initailizer;

int main()
{
	cout << Something::getValue() << endl; //static member function�� ����ؼ� instance�� ȣ���� �� �ִ�.


	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;


	//int(Something:: * fptr1)() = s1.temp; //static member function�� �ּҰ��� �׻� ���� ������ ������ ���� �Լ��� ���� ȣ���ϸ� ������ �����.
	int(Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	int(* fptr2)() = &Something::getValue;

	cout << fptr2() << endl; //Ư�� �ν��Ͻ��� ������ ��Ű�� �ʾƾ� �Ѵ�. (��...... ���� �Ӹ��� ������ ���޴°ǰ�...... ) 
	// �̷��� ������ �׷��� �� ���� ������ ���� �޴°ǰ�?

	return 0;
}