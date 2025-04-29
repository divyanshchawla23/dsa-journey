#include<bits/stdc++.h>
#include<iostream>
#include <vector>

using namespace std;

// DIVIDE INTO PARTS AND SORT WHILE MERGING
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(N)      


void merge(vector<int> &arr, int low ,int mid, int high){
    

    
    
}

void merge_sort(vector<int> &arr, int low , int high) {



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
    merge_sort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}