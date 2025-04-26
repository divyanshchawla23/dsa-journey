#include <bits/stdc++.h>
using namespace std;

/*

Example 1:
Input:N = 12345
               
Output:5
                
Explanation:  The number 12345 has 5 digits.
                                         
*/

void countDigits(int n)
{
    int cnt = 0;
    while(n!=0){
        n = n / 10;
        cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int n;
    cout << "Enter Input: ";
    cin >> n;

    countDigits(n);

    return 0;
}