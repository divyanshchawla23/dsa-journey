#include<bits/stdc++.h>
#include<iostream>
#include <vector>

using namespace std;

// PICK PIVOT AND PLACE IT IN CORRECT POSITION
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(1)      

int findPivot(vector<int> &arr, int low , int high){



}

void quick_sort(vector<int> &arr, int low , int high) {

  


}

int main() {

    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(5);
  
    int n = 5;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    quick_sort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}