#include <iostream>
#include <string>

using namespace std;

class Circle {

protected:
	int radius;

public:
	Circle(int radius = 0)
	{
		this->radius = radius;
	}

	int getRadius()
	{
		return radius;
	}

	void setRadius(int radius)
	{
		this->radius = radius;
	}

	double getArea()
	{
		return 3.14 * radius * radius;
	}

};

class NamedCircle : public Circle
{
private:
	string m_name;
public:
	NamedCircle(int r, string name_in)
	{
		Circle::radius = r;
		this->m_name = name_in;
	}

	void show()
	{
		cout << "반지름이 " << Circle::radius << "인 " << m_name << endl;
	}

};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
	return 0;
}