#include <bits/stdc++.h>
using namespace std;

void helper(string name, int n)
{
    if (n == 0)
    {
        return;
    }
    cout << name << endl;
    helper(name, n - 1);
}

int main()
{
    string name;
    cout << "Enter Name: ";
    cin >> name;

    int n;
    cout << "Enter Input: ";
    cin >> n;

    helper(name, n);

    return 0;
}