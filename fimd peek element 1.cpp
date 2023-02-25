/*
Given an integer array arr, find a peak element, and return its index.
A peak element is an element that is strictly greater than its neighbors. First element and last element of the array can't be peak elements.It is guaranteed that there is at most one peak element and no local minima.
You must write an algorithm that runs in O(log n) time.

Input Format
First line takes integer N(size of array) as input
Second line contains N space separated integers of the array a0,a1,a2,….an-1.

Constraints
1<=N<=10^8
-(2^31-1)<=arr[i]<=(2^31-1)
arr[i]!=arr[i+1] for all valid i.

Output Format
Print the index of peak element if found otherwise Print “No Peak Element”without quotes.

Sample Input
7
-5 2 4 3 2 1 -18
Sample Output
2
Explanation
arr[2] is the peak element.
*/
 
#include <iostream>
#include <vector>


using namespace std;

int find_peak_element(vector<int>& arr, int left, int right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
        return mid;
    } else if (arr[mid] < arr[mid - 1]) {
        return find_peak_element(arr, left, mid - 1);
    } else {
        return find_peak_element(arr, mid + 1, right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 1, right = n - 2;
    int peak_index = find_peak_element(arr, left, right);
    if (peak_index == -1) {
        cout << "No Peak Element" << endl;
    } else {
        cout << peak_index << endl;
    }
    return 0;
}
