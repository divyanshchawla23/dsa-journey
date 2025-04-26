#include <bits/stdc++.h>
using namespace std;

/*

Input Format: N = 3
Result:
A
A B
A B C


*/

void printPattern(int n)
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << s[j - 1] << " ";
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