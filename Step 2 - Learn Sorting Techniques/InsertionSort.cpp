#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// TAKES AN ELEMENT PLACES IN IT CURRENT ORDER
// LOOKS LEFT OF AN ELEMENT AND SWAP

// TIME COMPLEXITY =  O(N^2)     WORST AND AVERAGE
// TIME COMPLEXITY =  O(N)       BEST CASE

void insertion_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;

    while (j > 0 && arr[j] > arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}

int main()
{

  int arr[] = {13, 46, 24, 52, 20, 9};

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before insertion sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertion_sort(arr, n);
  return 0;
}
