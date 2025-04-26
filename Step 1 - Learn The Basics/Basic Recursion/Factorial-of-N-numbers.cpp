#include <bits/stdc++.h>
using namespace std;

void helper(int &fact, int n)
{
    if (n == 0)
    {
        return;
    }
    fact *= n;
    helper(fact, n - 1);
}

int main()
{

    int n;
    cout << "Enter Input: ";
    cin >> n;

    int fact = 1;

    helper(fact, n);

    cout << fact << endl;

    return 0;
}