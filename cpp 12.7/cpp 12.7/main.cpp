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
}; // 부모 클래스에서는 구현하지 않았지만, 자식 클래스에서는 반드시 구현해야 한다.

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
{ // pure function으로만 이루어진 class를 interface function이라고 한다.
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

void doSomething(IErrorLog& log) // 부모 클래스의 함수를 호출
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