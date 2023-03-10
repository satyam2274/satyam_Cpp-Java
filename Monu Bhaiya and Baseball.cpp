/*
You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.

At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following:

An integer x - Record a new score of x.
"+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.
"C" - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.
Return the sum of all the scores on the record.

Input Format
First line contains T - no of testcases.
Each testcase contains two lines each - first line containing integer N and second line containing N elements of the array in space separated format.

Constraints
1 <= T <= 1000
1 <= N <= 1000
ops[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 104, 3 * 104]
For operation "+", there will always be at least two previous scores on the record.
For operations "C" and "D", there will always be at least one previous score on the record.

Output Format
For each testcase, print the sum of all the scores on the record

Sample Input
1
5
5 2 C D +
Sample Output
30
Explanation
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
*/
 #include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string>& ops) {
stack<int> st;
int sum = 0;
for (string s : ops) {
if (s == "C") {
sum -= st.top();
st.pop();
} else if (s == "D") {
int val = st.top() * 2;
sum += val;
st.push(val);
} else if (s == "+") {
int val1 = st.top();
st.pop();
int val2 = st.top();
st.push(val1);
int val = val1 + val2;
sum += val;
st.push(val);
} else {
int val = stoi(s);
sum += val;
st.push(val);
}
}
return sum;
}

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
vector<string> ops(n);
for (int i = 0; i < n; i++) {
cin >> ops[i];
}
cout << calPoints(ops) << endl;
}
return 0;
}




