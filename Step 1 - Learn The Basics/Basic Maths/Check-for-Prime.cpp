#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N =10

Output: False
Explanation: 10 is not prime,
it is  composite because it has 4 divisors: 1, 2, 5 and 10.

*/

void isPrime(int n)
{
    if (n <= 1)
    {
        cout << "Non-Prime" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    isPrime(n);

    return 0;
}