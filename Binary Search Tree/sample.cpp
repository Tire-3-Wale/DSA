#include <iostream>
using namespace std;

struct emp
{
    int id;
    char name[30];
    long long int sal;
} e[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &e[i].id);
        scanf("%s", e[i].name);
        scanf("%d", &e[i].sal);
    }
    cout << "Outprt" << endl;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", e[i].id);
        printf("%s ", e[i].name);
        printf("%d ", e[i].sal);
        cout << endl;
    }

    return 0;
}