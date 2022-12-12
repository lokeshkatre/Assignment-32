#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A()
    {
        a = 0;
        cout << "parent constructor" << endl;
    }
    A(int n)
    {
        a = n;
        cout << "parent constructor" << endl;
    }
};
class B : public A
{
    int b;

public:
    B() : A()
    {
        b = 0;
        cout << "derived constructor" << endl;
    }
    B(int n, int a) : A(a)
    {
        b = n;
        cout << "derived constructor" << endl;
    }
    void display()
    {
        cout << "a=" << a << " b= " << b << endl;
    }
};

int main()
{
    B b(3, 4);
    b.display();
}