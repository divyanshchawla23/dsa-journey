#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    helper(n - 1);
}

int main()
{

    int n;
    cout << "Enter Input: ";
    cin >> n;

    helper(n);

    return 0;
}