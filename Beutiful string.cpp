/*
A string s is said to be Beautiful String if s can be palindrome after deleting at most one character from it.

Given a string s , Print True if s is a beautiful string .

Input Format
Single line consists of a string s

Constraints
1 <= s.length <= 105

Output Format
Print "True" or "False"

Sample Input
raceacar
Sample Output
True
Explanation
we can transform string s ="raceacar" into a palindromic string after removing either 'a'(at index 4) or 'e'(at index 3)
"racecar" or "racacar" both are palindromic strings , Hence the given string s is a Beautiful string
*/
 #include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isBeautiful(string s) {
    int n = s.length();
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (isBeautiful(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
