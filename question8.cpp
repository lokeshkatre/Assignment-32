#include<iostream>
using namespace std;

class factorial
{
    int fact;
    public:
    factorial(){}
    int get()
    {
        return fact;
    }
    factorial(int n)
    {
        fact = findFact(n);
        
    }
    factorial(factorial &f)
    {
        fact = f.get();
        
    }
    int findFact(int n)
    {
        int fact= 1;
        for(int i=n; i>=1 ; i--)
            fact = fact * i;
        return fact;
    }
    void display()
    {
        cout<<"factorial is "<<fact<<endl;
    }
};

int main()
{
    factorial f1(4);
    factorial f2;
    f2=f1;
    f1.display();
    f2.display();
 return 0;
}