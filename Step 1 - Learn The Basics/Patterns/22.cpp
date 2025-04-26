#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

*/

void printPattern(int n)
{
    int cnt = n;
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int val = max(abs(n - i), abs(n - j)) + 1;
            cout << val;
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