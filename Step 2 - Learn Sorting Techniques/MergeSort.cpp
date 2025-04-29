#include<bits/stdc++.h>
#include<iostream>
#include <vector>

using namespace std;

// DIVIDE INTO PARTS AND SORT WHILE MERGING
// TIME COMPLEXITY =  O(NLogN)  WORST, AVERAGE and BEST CASE
// SPACE COMPLEXITY =  O(N)      


void merge(vector<int> &arr, int low ,int mid, int high){
    
    vector<int> temp;

    int left = low;
    int right = mid +1;

    while(left<= mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;

        }
        else if(arr[left]>arr[right]){
            temp.push_back(arr[right]);
            right++;
        }


    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;

    }

    for (int i = low; i <= high; i++)
    {
        arr[i]= temp[i-low];
    }
    
    
}

void merge_sort(vector<int> &arr, int low , int high) {
  // merge sort

  if(low >= high) return;
  int mid = (low+high)/2;
  merge_sort(arr,  low ,  mid);
  merge_sort(arr,  mid+1 ,  high);
  merge(arr,low,mid,high);


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