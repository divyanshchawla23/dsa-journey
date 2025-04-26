#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N = 12345

Output:54321

Explanation: The reverse of 12345 is 54321.

*/

void reverseNumber(int n)
{
    int ans = 0;

    while (n != 0)
    {
        int lastdigit = n % 10;
        ans = (ans * 10) + lastdigit;
        n = n / 10;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    reverseNumber(n);

    return 0;
}