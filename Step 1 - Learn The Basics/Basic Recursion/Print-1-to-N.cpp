#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    if (n == 0)
    {
        return;
    }
    helper(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cout << "Enter Input: ";
    cin >> n;

    helper(n);

    return 0;
}