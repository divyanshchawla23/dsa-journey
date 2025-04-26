#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 6
Result:
F
E F
D E F
C D E F
B C D E F
A B C D E F

*/

void printPattern(int n)
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << s[j - 1];
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