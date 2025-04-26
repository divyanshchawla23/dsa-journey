#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
* * *
* *
*

*/

void printPattern(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
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