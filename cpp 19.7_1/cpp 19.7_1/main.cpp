#include <iostream>
#include <vector>
#include <cstdio>
#include <utility> // forward

using namespace std;

class CustomVector
{
public:
    unsigned n_data = 0;
    int* ptr = nullptr;

    CustomVector(const unsigned& _n_data, const int& _init = 0)
    {
        cout << "Constructor" << endl;

        init(_n_data, _init);
    }

    CustomVector(CustomVector& i_input)
    {
        cout << "Copy constructor" << endl;

        init(i_input.n_data);

        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = i_input.ptr[i];
    }

    CustomVector(CustomVector&& r_input)
    {
        cout << "Move constructor" << endl;

        n_data = r_input.n_data;
        ptr = r_input.ptr;

        r_input.n_data = 0;
        r_input.ptr = nullptr;
    }

    ~CustomVector()
    {
        delete[] ptr;
    }

    void init(const unsigned& _n_data, const int& _init = 0)
    {
        n_data = _n_data;
        ptr = new int[n_data];
        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = _init;
    }
};

void doSomething(CustomVector& vec)
{
    cout << "Pass by L-reference" << endl;
    CustomVector new_vec(vec);
}


void doSomething(CustomVector&& vec)
{
    cout << "Pass by R-reference" << endl;
    CustomVector new_vec(move(vec)); // Note: vec itself is L-value
    //CustomVector new_vec(vec); // call for copy constructor
}

template<typename T>
void doSomethingTemplate(T&& vec)
//void doSomethingTemplate(T vec)
{
    doSomething(forward<T>(vec));
    //doSomething(vec); 
}

int main()
{
    CustomVector my_vec(10, 1024);

    //CustomVector temp(move(my_vec));

    //doSomething(my_vec);
    //doSomething(CustomVector(10, 8));

    doSomethingTemplate(my_vec);
    doSomethingTemplate(CustomVector(10, 8));

    //cout << my_vec.n_data << endl;
}