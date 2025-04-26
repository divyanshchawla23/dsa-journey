#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
  *
 ***
*****
*****
 ***
  *

*/

void firstHalf(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void secondHalf(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printPattern(int n)
{
    firstHalf(n);
    secondHalf(n);
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    printPattern(n);

    return 0;
}