#include <bits/stdc++.h>
using namespace std;

// DIVIDE INTO PARTS AND SORT WHILE MERGING
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(N)

void merge(int arr[], int n, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }
        else
        {
            ans.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        ans.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        ans.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = ans[i - low];
    }
}

void merge_sort(int arr[], int n, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, n, low, mid);
    merge_sort(arr, n, mid + 1, high);
    merge(arr, n, low, mid, high);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before merge sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    merge_sort(arr, n, 0, n - 1);

    cout << "After merge sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}