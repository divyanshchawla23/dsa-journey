#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void printPattern(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
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