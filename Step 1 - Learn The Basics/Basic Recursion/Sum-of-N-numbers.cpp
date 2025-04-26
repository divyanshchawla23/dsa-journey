#include <bits/stdc++.h>
using namespace std;

void helper(int &sum, int n)
{
    if (n == 0)
    {
        return;
    }
    sum += n;
    helper(sum, n - 1);
}

int main()
{

    int n;
    cout << "Enter Input: ";
    cin >> n;

    int sum = 0;

    helper(sum, n);

    cout << sum << endl;

    return 0;
}