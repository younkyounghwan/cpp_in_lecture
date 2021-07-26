#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Examples
{
public:

    void ex1()
    {
        vector<int> vect;
        for (vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
            cout << *itr;

        for (auto itr = vect.begin(); itr != vect.end(); itr++)
            cout << *itr;

        for (auto itr : vect) // for (const auto & itr : vect)
            cout << itr;
    }

    void ex2()
    {
        int x = int();

        auto auto_x = x;

        const int& crx = x;

        auto auto_crx1 = crx; // removed const

        const auto& auto_crx2 = crx;

        volatile int vx = 1024;

        auto avx = vx;

        volatile auto vx = 1024;
    }

    //template<class T>
    //void func_ex3(T arg)
    //{

    //}

    template<class T>
    void func_ex3(const T arg)
    {}

    void ex3()
    {
        const int& crx = 123;

        func_ex3(crx);
    }

    void ex4()
    {
        const int c = 0;
        auto& rc = c;
        //rc = 123; // error
    }

    void ex5() // amendment // 개정 수정
    {
        int i = 42;
        auto&& ri_1 = i; // L-value
        auto&& ri_2 = 42; // R-value
    }

    void ex6()
    {
        int x = 42;
        const int* p1 = &x;
        auto p2 = p1;
        // *p2 = 43; // error
    }

    template<typename T, typename S>
    void func_ex7(T ihs, S rhs)
    {
        auto prod1 = ihs * rhs;

        //typedef typeof(ihs* rhs) product_type;// pre-c++11 'some' compliers
        typedef decltype(ihs* rhs) product_type;

        product_type prod2 = ihs * rhs;

        decltype(ihs * rhs) prod3 = ihs * rhs;
    }

    void ex10()
    {

    }
    void ex12()
    {

    }
    void ex14()
    {

    }
    void ex15()
    {

    }
    void ex16()
    {

    }

};

int main()
{
    Examples examples;

    examples.ex1();
    examples.ex2();
    examples.ex3();
    examples.ex10();
    examples.ex12();
    examples.ex14();
    examples.ex15();
    examples.ex16();


    return 0;
}