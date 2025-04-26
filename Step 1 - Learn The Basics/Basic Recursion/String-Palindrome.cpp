#include <bits/stdc++.h>
using namespace std;

void helper(string s, int start, int end, bool &isPalindrome)
{
    if (start == end)
    {
        return;
    }
    if (s[start] != s[end])
    {
        isPalindrome = false;
        return;
    }
    helper(s, start + 1, end - 1, isPalindrome);
}

int main()
{
    string s = "amanaplanacanalpanama";
    int n = s.size();

    bool isPalindrome = true;

    helper(s, 0, n - 1, isPalindrome);

    if (isPalindrome)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}