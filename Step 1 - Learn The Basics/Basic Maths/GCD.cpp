#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N1 = 9, N2 = 12


Output:3
Explanation:
Factors of 9: 1, 3 and 9
Factors of 12: 1, 2, 3, 4, 6, 12

Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.

*/

vector<int> helper(int n)
{
    int half = n / 2;
    vector<int> ans;

    for (int i = 1; i <= half; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
        }
    }
    ans.push_back(n);

    return ans;
}

void gcd(int n, int m)
{
    int ans = 0;
    vector<int> factorofN = helper(n);
    vector<int> factorofM = helper(m);

    vector<int> common;

    int i = 0;
    int j = 0;

    while (i < factorofN.size() && j < factorofM.size())
    {
        if (factorofN[i] == factorofM[j])
        {
            common.push_back(factorofN[i]);
            i++;
            j++;
        }
        else if (factorofM[j] < factorofN[i])
        {
            j++;
        }
        else if (factorofM[j] > factorofN[i])
        {
            i++;
        }
    }

    ans = *max_element(common.begin(), common.end());

    cout << "GCD for N and M is: " << ans << endl;
}

int main()
{
    int n;
    cout << "Enter Input 1: ";
    cin >> n;

    int m;
    cout << "Enter Input 2: ";
    cin >> m;

    gcd(n, m);

    return 0;
}