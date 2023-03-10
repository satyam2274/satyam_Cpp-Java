/*
Vishal is couting the score of a balanced parenthesis. help vishal find the score. the Score is defined as.
"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.

Input Format
string of balanced parenthesis

Constraints
2 <= s.length <= 50
s consists of only '(' and ')'.

Output Format
The score

Sample Input
()()
Sample Output
2
*/

#include <iostream>
#include <stack>
using namespace std;

int scoreOfParentheses(string s) {
    stack<int> st; // stack to store scores
    st.push(0); // initialize stack with 0 score
    for (char c : s) {
        if (c == '(') {
            st.push(0); // push 0 score for new '('
        } else {
            int score = st.top(); st.pop(); // get current score
            int prev_score = st.top(); st.pop(); // get previous score
            int total_score = prev_score + max(2*score, 1); // calculate total score
            st.push(total_score); // push total score to stack
        }
    }
    return st.top(); // return final score
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfParentheses(s) << endl;
    return 0;
}
