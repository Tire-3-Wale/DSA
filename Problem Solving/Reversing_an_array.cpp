#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> Reverse(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

void PrintVec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(1);
    arr.push_back(54);
    arr.push_back(19);
    arr.push_back(48);

    vector<int> ans = Reverse(arr);
    PrintVec(ans);
    return 0;
}