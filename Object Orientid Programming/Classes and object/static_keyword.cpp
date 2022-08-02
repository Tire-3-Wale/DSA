#include <iostream>
using namespace std;
class hero
{
public:
    int health;
    char *name;
    char level;
    static int Time;

    static int random()
    {
        return Time;
    }
};
// Static keyword ko class ke bahar initialize karatee hai
int hero ::Time = 5;

int main()
{
    cout << hero::random() << endl; 
    cout << "Static time " << hero::Time << endl;
    return 0;
}