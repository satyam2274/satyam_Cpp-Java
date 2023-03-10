/*
Shyam is given an array of Intergers and was given a task by his freind to find the sum of min(b). where b is ranges over subarray of arr.

Input Format
first line takes length of array second lines will have space seperated array elements

Constraints
1 <= arr.length <= 3 * 10^4
1 <= arr[i] <= 3 * 10^4

Output Format
output the sum. return answere modulo 1e9+7

Sample Input
4
3 1 2 4
Sample Output
17
Explanation
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
*/

    #include <iostream>
#include <stack>
#include <vector>
#define MOD 1000000007
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n), right(n);
    stack<int> st; // to store indices of elements in increasing order
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop(); // pop all greater elements
        }
        left[i] = st.empty() ? -1 : st.top(); // index of previous smaller element
        st.push(i);
    }
    st = stack<int>(); // clear stack
    for (int i = n-1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop(); // pop all greater or equal elements
        }
        right[i] = st.empty() ? n : st.top(); // index of next smaller or equal element
        st.push(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = (ans + arr[i] * (i-left[i]) * (right[i]-i)) % MOD; // calculate contribution to ans
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sumSubarrayMins(arr) << endl;
    return 0;
}
