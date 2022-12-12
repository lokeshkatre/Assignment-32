#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    A(int n)
    {
        a=n;
    }
};
class B: public A
{
    protected:
    int b;
    public:
    B(int a, int n): A(a)
    {
        b=n;
    }
};
class C: public B
{
    protected:
    int c;
    public:
    C(int a,int b,int n): B(a,b)
    {
        c=n;
    }
    void display()
    {
        cout<<"a = "<<a <<" b = "<<b <<" c = "<<c <<endl;
    }
};
int main()
{
    C c(4,5,6);
    c.display();
}


