#include <bits/stdc++.h>
using namespace std;

int helper(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int last = helper(n - 1);
    int slast = helper(n - 2);

    return last + slast;
}

int main()
{

    int n;
    cout << "Enter Input: ";
    cin >> n;

    cout << helper(n) << endl;

    return 0;
}