#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
// creating Inherited class
class Male : public Human
{
public:
    string color;
    int size = 5;
};

int main()
{
    Human h1;
    Male Shivang;
    cout << Shivang.size << " feet" << endl;
    return 0;
}