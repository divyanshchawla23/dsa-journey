#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
A B C
A B
A

*/

void printPattern(int n)
{
    for (int i = n; i >= 1; i--)
    {

        for (int j = 0; j < i; j++)
        {
            cout << (char)('A' + j) << " ";
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