#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
1
01
101

*/

void printPattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        bool b = 1;
        if (i % 2 == 0)
        {
            b = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << b;
            b = !b;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    printPattern(n);

    return 0;
}