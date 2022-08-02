#include <iostream>
using namespace std;
class hero
{
public:
    hero()
    {
        cout << "Constructor called " << endl;
    }

    ~hero(){
        cout<<"destructor bhaai called "<< endl;
    }


};
int main()
{
    hero a;
    hero *b = new hero();
    delete b; // ye dynamic allocation ke live call kiya hai 

    return 0;
}