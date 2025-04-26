#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
  A
 ABA
ABCBA

*/

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (char c = 'A'; c <= 'A' + i - 1; c++)
        {
            cout << c;
        }

        for (char c = 'A' + (i - 2); c >= 'A'; c--)
        {
            cout << c;
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