#include <iostream>
#include <cstring>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    char *name;

    // Parameterised constructor
    
    Hero(int health, char level)
    {
        this->health = health; // yee line 5 ke health ko line 9 ke health mai copy kar raha hai.
        this->level = level;
    }

    // Copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)];
    }


    void Print()
    {
        cout << "Health " << this->health << endl;
        cout << "Level " << this->level << endl;
    }
};

int main()
{
    Hero Suresh(60, 'A');
    Suresh.Print();
    Hero Ramesh(Suresh); // Ye hota hai copy constructor
    Ramesh.Print();

    // Shallow copy banata hai default copy constructor (same memory acessed with diffrent names)
    // deep copy mai ek naya arraybana ke usme copy karwa dete hai.




    /*
        ye yaha pe kaam kia kar raha hai ...?
        Ramesh.health = Suresh.health
        Ramesh.level = Suresh.level
    */

    // Hero Ramesh(10);
    // cout << Ramesh.health << endl;

    return 0;
}