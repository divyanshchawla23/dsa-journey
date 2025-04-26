#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N = 4554

Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

*/

int reverseNumber(int n)
{
    int ans = 0;

    while (n != 0)
    {
        int lastdigit = n % 10;
        ans = (ans * 10) + lastdigit;
        n = n / 10;
    }
    return ans;
}

void checkPalindrome(int n, int reversed)
{

    if (n == reversed)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Non Palindrome Number" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    int revNumber = reverseNumber(n);

    checkPalindrome(n, revNumber);

    return 0;
}