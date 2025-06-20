#include <bits/stdc++.h>
using namespace std;

// PUSH THE MAX TO RIGHT USING ADJACENT SWAPS
// TIME COMPLEXITY =  O(N^2)     WORST AND AVERAGE
// TIME COMPLEXITY =  O(N)       BEST CASE

void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main()
{
  int arr[] = {13, 46, 24, 52, 20, 9};

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before bubble sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  
  bubble_sort(arr, n);

  cout << "After bubble sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}
