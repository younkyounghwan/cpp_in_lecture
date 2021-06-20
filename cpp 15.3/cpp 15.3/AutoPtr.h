#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
private:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}


	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor " << std::endl;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
		
	}


	AutoPtr& operator = (AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignment " << std::endl;

		if (&a == this)      //prevent self-assignment
			return *this;

		if (m_ptr != nullptr) delete m_ptr;
		
		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	
		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->()const { return m_ptr; }
	bool isNull()const { return m_ptr == nullptr; }
};
