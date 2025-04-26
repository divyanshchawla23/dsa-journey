#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
******
**  **
*    *
*    *
**  **
******

*/

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int stars = n - i + 1;
        int spaces = 2 * (i - 1);
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        int stars = i;
        int spaces = 2 * (n - i);
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
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