#include <bits/stdc++.h>
using namespace std;

// PICK PIVOT AND PLACE IT IN CORRECT POSITION
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(1)

int findPivot(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i < j)
  {
    while (i <= high - 1 && arr[i] <= pivot)
    {
      i++;
    }

    while (j >= low - 1 && arr[j] > pivot)
    {
      j--;
    }

    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low], arr[j]);
  return j;
}

void quick_sort(int arr[], int low, int high)
{

  if (low < high)
  {
    int pIndex = findPivot(arr, low, high);
    quick_sort(arr, low, pIndex - 1);
    quick_sort(arr, pIndex + 1, high);
  }
}

int main()
{
  int arr[] = {13, 46, 24, 52, 20, 9};

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before quick sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

  quick_sort(arr, 0, n - 1);

  cout << "After quick sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}