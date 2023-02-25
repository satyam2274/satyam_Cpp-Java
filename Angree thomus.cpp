/*
Thanos doesn’t like duplicate numbers more than twice.You have given an integer array arr sorted in Non-decreasing order.Serve the all numbers of array in non-decreasing order such that each unique element appears at most twice to Thanos otherwise he’ll kill you.
Try to solve in O(1) space complexity.

Input Format
First line takes integer N(size of arr) as input.
Second line contains N integers in non-decreasing order.

Constraints
0<=N<=3*(10^4)
-10^5<=arr[i]<=10^4

Output Format
Print all unique integers of array in non-decreasing order in such a way that each unique element appears at most twice.

Sample Input
10
0 1 1 1 2 2 3 3 3 4
Sample Output
0 1 1 2 2 3 3 4
Explanation
Sample output has all unique integers of sample input array, with in non-decreasing order in such a way that each unique element appears at most twice.
*/
 #include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    int count = 1;
    int j = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            count = 1;
        }
        if (count <= 2) {
            arr[j] = arr[i];
            j++;
        }
    }
    arr.resize(j);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> res = removeDuplicates(arr);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
