#include <iostream>
using namespace std;

class FLOAT
{
    float data;

public:
    FLOAT(float n)
    {
        data = n;
    }
    FLOAT()
    {
        data = 0;
    }
    void set(float n)
    {
        data = n;
    }
    float get()
    {
        return data;
    }
    FLOAT operator+(FLOAT n)
    {
        FLOAT temp;
        temp.data = data + n.get();
        return temp;
    }
    FLOAT operator-(FLOAT n)
    {
        FLOAT temp;
        temp.data = data - n.get();
        return temp;
    }
    FLOAT operator*(FLOAT n)
    {
        FLOAT temp;
        temp.data = data * n.get();
        return temp;
    }
    FLOAT operator/(FLOAT n)
    {
        FLOAT temp;
        temp.data = data / n.get();
        return temp;
    }
};

int main()
{
    FLOAT f1 = 4.5;
    FLOAT f2;
    f2 = 3.4;
    FLOAT f3 = f1 + f2;
    cout << f3.get() << endl;
    f3 = f1 - f2;
    cout << f3.get() << endl;
    f3 = f1 * f2;
    cout << f3.get() << endl;
    f3 = f1 / f2;
    cout << f3.get() << endl;
}