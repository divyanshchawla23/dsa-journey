#include <bits/stdc++.h>
using namespace std;

// SELECTS MIN REPLACE WITH THE FIRST/SECOND/WHATEVER ITERATION

// TIME COMPLEXITY =  O(N^2)  BEST, WORST, AVERAGE

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int mini = i;
    for (int j = i; j < n; j++)
    {
      if (arr[i] < arr[mini])
      {
        mini = j;
      }
    }
    swap(arr[mini], arr[i]);
  }
}

int main()
{
  int arr[] = {13, 46, 24, 52, 20, 9};

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before selection sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  
  selection_sort(arr, n);

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}
