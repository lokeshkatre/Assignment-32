#include<iostream>
using namespace std;

class Rectangle
{
    float area;
    public:
    void display()
    {
        cout<<"\narea of rectangle is "<<area<<endl;
    }
    void Area(int l,int w)
    {
        area = l*w;
    }
    void Area(double l,double w)
    {
        area = l*w;
    }
    void Area(double l,int w)
    {
        area = l*w;
    }
    void Area(int l,double w)
    {
        area = l*w;
    }
   
};

int main()
{
    Rectangle r;
    r.Area(2,4);
    r.display();
    r.Area(2,3.4);
    r.display();
    r.Area(2.4,4);
    r.display();
    r.Area(4.5,3.65);
    r.display();
    
}