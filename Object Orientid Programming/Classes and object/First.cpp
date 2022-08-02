#include <iostream>
// #include "Hero.cpp"  //Class ko doosri file mai bhee dal ke use kar sakte hai
using namespace std;
class Hero
{
private:
    int health;
    char level;

public:
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }
};

    // hum objects ki property ko use kar sakte hai dot operator ka use karke
int main()
{
    Hero Ramesh; //Static allocation
    Ramesh.sethealth(70);
    Ramesh.setlevel('A');
    cout << "Health is " << Ramesh.gethealth() << endl;
    cout << "Level is " << Ramesh.getlevel() << endl;

    Hero *b = new Hero; //Dynamic allocation 
    // Isme info agar ready ya update karni hi to (*) derefrence operator ka use karne padega q ki b hamara adress store karta hai 

    cout << "Health is " << (*b).gethealth() << endl;
    cout << "Level is " << (*b).getlevel() << endl;
    
    // Yaa hum arrow ka bhee use kar sakte hai (->)

    cout << "Health is " << b->gethealth() << endl;
    cout << "Level is " << b->getlevel() << endl;
    return 0;
}