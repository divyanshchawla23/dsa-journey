#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 6
Result:
1          1
12        21
12       321
1234    4321
12345  54321
123456654321

*/

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int spaces = 2 * (n - i);
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
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