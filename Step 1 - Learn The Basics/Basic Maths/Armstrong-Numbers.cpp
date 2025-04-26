#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N = 153

Output:True

Explanation: 13+53+33 = 1 + 125 + 27 = 153

*/

void checkArmstrong(int n)
{
    int number = n;
    int sum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        sum += (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if (sum == number)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    checkArmstrong(n);

    return 0;
}