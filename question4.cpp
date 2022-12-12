#include<iostream>
using namespace std;

class Addition{
    float sum;
    public:
    int add(int x,int y,int z)
    {
        sum = x+ y + z;
        return sum;
    }
    double add(double x,double y,double z)
    {
        sum = x+ y + z;
        return sum;
    }
    int add(int x,int y)
    {
        sum = x+ y ;
        return sum;
    }
    double add(double x,double y)
    {
        sum = x+ y ;
        return sum;
    }
};
int main()
{
    Addition sum;
    cout<<sum.add(3,4)<<endl;
    cout<<sum.add(3,5,4)<<endl;
    cout<<sum.add(3.6,4.5)<<endl;
    cout<<sum.add(3.7,5.6,4.6)<<endl;

}