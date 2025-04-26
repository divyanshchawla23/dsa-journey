#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
  *
  **
  ***
  **
  *

*/

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n + 1; i <= (2 * n) - 1; i++)
    {

        for (int j = 1; j <= (2 * n) - i; j++)
        {
            cout << "*";
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