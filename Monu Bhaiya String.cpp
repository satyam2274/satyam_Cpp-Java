/*
Monu bhaiya is given a string s, his task is to remove duplicate letters so that every letter appears once and only once. he must make sure his result is the smallest in lexicographical order among all possible results.

Input Format
String

Constraints
1 <= s.length <= 104
s consists of lowercase English letters.

Output Format
Print resulting string

Sample Input
bcabc
Sample Output
abc
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeDuplicateLetters(string s) {
    int last[26] = {0};
    bool visited[26] = {false};
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        last[s[i] - 'a'] = i;
    }
    for (int i = 0; i < s.length(); i++) {
        if (visited[s[i] - 'a']) {
            continue;
        }
        while (!st.empty() && st.top() > s[i] && last[st.top() - 'a'] > i) {
            visited[st.top() - 'a'] = false;
            st.pop();
        }
        st.push(s[i]);
        visited[s[i] - 'a'] = true;
    }
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << removeDuplicateLetters(s);
    return 0;
}
