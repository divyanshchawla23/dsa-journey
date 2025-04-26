#include <bits/stdc++.h>
using namespace std;

void helper(int arr[], int n, int start, int end)
{
    if (start == end)
    {
        return;
    }
    swap(arr[start], arr[end]);
    helper(arr, n, start + 1, end - 1);
}

int main()
{
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    cout << "Before Reverse: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    helper(arr, n, 0, n - 1);
    cout << "After Reverse: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}