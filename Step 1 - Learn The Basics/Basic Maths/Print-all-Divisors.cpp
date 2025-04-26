#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N = 36

Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

*/

void allDivisors(int n)
{

    int half = n / 2;
    for (int i = 1; i <= half; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    allDivisors(n);

    return 0;
}