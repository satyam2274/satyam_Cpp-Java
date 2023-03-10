/*
Given two sequences pushed and popped with distinct values, return true if and only if this could have been the result of a sequence of push and pop operations on an initially empty stack.

Input Format
First line of input contains integer n denoting the size of sequences. The next line of input contains n space separated integers denoting the elements of pushed sequence. Last line of input contains n space separated integers denoting the elements of popped sequence.

Constraints
1<=n<=1000

Output Format
Print true if and only if this could have been the result of a sequence of push and pop operations on an initially empty stack, otherwise print false.

Sample Input
5
1 2 3 5 6
5 6 3 2 1
Sample Output
true
Explanation
We might do the following sequence: push(1), push(2), push(3), push(5), pop() -> 5, push(6), pop() -> 6, pop() -> 3, pop() -> 2, pop() -> 1
*/
#include<bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    int i = 0, j = 0;
    stack<int> st;
    while (i < pushed.size()) {
        st.push(pushed[i]);
        i++;
        while (!st.empty() && j < popped.size() && st.top() == popped[j]) {
            st.pop();
            j++;
        }
    }
    return st.empty();
}

int main() {
    int n;
    cin >> n;
    vector<int> pushed(n), popped(n);
    for (int i = 0; i < n; i++)
        cin >> pushed[i];
    for (int i = 0; i < n; i++)
        cin >> popped[i];
    if (validateStackSequences(pushed, popped))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
