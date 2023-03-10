/*
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

Input Format
The first line contains an integer N Second line are given an array of temperatures

Constraints
1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100

Output Format
You have to print an array

Sample Input
8
73 74 75 71 69 72 76 73
Sample Output
1 1 4 2 1 1 0 0
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st; // to store indices of temperatures in decreasing order
    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
            int prev = st.top();
            st.pop(); // pop previous temperatures smaller than current temperature
            ans[prev] = i - prev; // set the waiting time to the difference in indices
        }
        st.push(i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> temperatures(n);
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }
    vector<int> ans = dailyTemperatures(temperatures);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
