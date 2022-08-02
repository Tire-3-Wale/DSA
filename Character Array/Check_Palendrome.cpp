#include <iostream>
using namespace std;

char ToLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp;
        temp = ch - 'A' + 'a';
        return temp;
    }
}

bool CheckPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (ToLowercase(arr[start]) != ToLowercase(arr[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int GetSize(char arr[])
{
    int count = 0;
    int i = 0;
    while (arr[i] != 0)
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char ch[20];
    cout << "Enter your string" << endl;
    cin >> ch;
    int n = GetSize(ch);

    cout << "0 for 'NO' and 1 for 'YES':- " << CheckPalindrome(ch, n) << endl;

    return 0;
}