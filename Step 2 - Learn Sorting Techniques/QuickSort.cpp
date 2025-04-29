#include<bits/stdc++.h>
using namespace std;

// PICK PIVOT AND PLACE IT IN CORRECT POSITION
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(1)      

int findPivot(vector<int> &arr, int low , int high){



}

void quick_sort(vector<int> &arr, int low , int high) {

  


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
  
  quick_sort(arr, n , 0, n-1);

  cout << "After quick sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}