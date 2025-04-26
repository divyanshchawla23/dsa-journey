#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
A
B B
C C C

*/

void printPattern(int n)
{
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        c = c + 1;
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