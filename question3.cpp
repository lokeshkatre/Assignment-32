#include<iostream>
using namespace std;

class Animals
{
    protected:
    string animalSound;
    public:
    string sound()
    {
        return animalSound;
    }
    void set(string sound)
    {
        animalSound = sound;
    }

};

class Dog: public Animals
{
    string dogSound;
    public:
    string sound ()
    {
        return dogSound;
    }
   void set(string sound)
    {
        dogSound = sound;
    }
};
int main()
{
    Animals cat;
    cat.set("mew mew");
    string sound = cat.sound();
    cout<<sound<<endl;
    
    Dog dog;
    dog.set("bhaw bhaw");
    string dogSound = dog.sound();
    cout<<dogSound<<endl;
    return 0;
}