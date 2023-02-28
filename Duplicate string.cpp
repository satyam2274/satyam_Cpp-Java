/*
You are given with a string and you have to remove 2 adjacent same characters in the string if there are and you have to keep on doing this task until there are no two adjacent same characters. Note :there is possibility that even after removing the duplicay the left over part when attached forms the two same characters.

Input Format
You have to take the input for the string.

Constraints
1<=string.length()<=10000.

Output Format
Return the string after removing the two adjacent same characters.

Sample Input
abbaca
Sample Output
ca
Explanation
bb are two same character and they are adjacent so after removing the string becomes=>aaca.
Now the string have other duplicate characters i.e aa and after removing them the string becomes "ca".
*/
  #include <iostream>
#include <string>

using namespace std;

string removeAdjacentDuplicates(string s) {
    string result;
    bool hasDuplicates = true;

    while (hasDuplicates) {
        hasDuplicates = false;
        int i = 0;
        while (i < s.length()) {
            if (i == s.length() - 1 || s[i] != s[i+1]) {
                result += s[i];
                i++;
            } else {
                hasDuplicates = true;
                i += 2;
            }
        }
        s = result;
        result = "";
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << removeAdjacentDuplicates(s) << endl;
    return 0;
}
