#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 6
Result:
***********
 *********
  *******
   *****
    ***
     *

*/

void printPattern(int n)
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

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    printPattern(n);

    return 0;
}