/*
Given an array nums with n books of subject Physics, Chemistry, Mathematics, sort them in-place so that books of the same subject are adjacent, with the subject in the order Physics, Chemistry, and Mathematics.
We will use the char P, C,M to represent the subject Physics, Chemistry, and Mathematics, respectively.
Try to solve in O(1) space complexity.

Input Format
First Line takes integer N(size of array).
Next line takes N char as input.

Constraints
1<=N<=10^5
arr[i] is char either P, C or M.

Output Format
Sort them in-place so that books of the same subject are adjacent, with the subject in the order Physics, Chemistry, and Mathematics.

Sample Input
7
P M C C P M C
Sample Output
P P C C C M M
*/
 #include <iostream>
#include <vector>

using namespace std;

void sort_books(vector<char>& arr) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 'P') {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 'C') {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort_books(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
