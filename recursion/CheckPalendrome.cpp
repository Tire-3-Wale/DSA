#include <iostream>
using namespace std;
bool CheckP(string str, int i, int j)
{
    // Base Case
    if (i > j)
    {
        return true;
    }

    // Recursive call
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
       return CheckP(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "acba";
    bool IsP = CheckP(str, 0, str.length() - 1);
    if (IsP)
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "it is not a palindrome " << endl;
    }
    return 0;
}