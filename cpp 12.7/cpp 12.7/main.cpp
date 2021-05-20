#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(string name)
		:m_name(name)
	{}

	string getName() { return m_name; }

	virtual void speak() const = 0; // pure virtual function
}; // �θ� Ŭ���������� �������� �ʾ�����, �ڽ� Ŭ���������� �ݵ�� �����ؾ� �Ѵ�.

//void Animal::speak() const // the body of the pure virtual function
//{
//	cout << m_name << " ??? " << endl;
//}

class Cat : public Animal
{
public:
	Cat(string name) 
		: Animal(name)
	
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)

	{}

	void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)

	{}

	void speak() const
	{
		cout << m_name << " mooo " << endl;
	}

};

class IErrorLog
{ // pure function���θ� �̷���� class�� interface function�̶�� �Ѵ�.
public:
	virtual bool reportError(const char* errorMessage) = 0;

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log) // �θ� Ŭ������ �Լ��� ȣ��
{
	log.reportError("Runtime error!!");
}

int main()
{
	//Animal ani("Hi");
	//ani.speak();

	Cow cow("cow");
	Dog dog("dog");

	cow.speak();
	dog.speak();

	cout << endl;
	
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}