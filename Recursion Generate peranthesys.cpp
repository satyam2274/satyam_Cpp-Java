/*
Given an integer 'n'. Print all the possible pairs of 'n' balanced parentheses.
The output strings should be printed in the sorted order considering '(' has higher value than ')'.

Input Format
Single line containing an integral value 'n'.

Constraints
1<=n<=11

Output Format
Print the balanced parentheses strings with every possible solution on new line.

Sample Input
2
Sample Output
()() 
(()) 
*/

#include <iostream>
using namespace std;

void generateParenthesis(int n, int open, int close, string str) {
    if(close == n) {
        cout<<str<<endl;
        return;
    }
    if(open > close) {
        generateParenthesis(n, open, close+1, str+')');
    }
    if(open < n) {
        generateParenthesis(n, open+1, close, str+'(');
    }
}

int main()
{
    int n;
    cin>>n;
    generateParenthesis(n, 0, 0, "");
    return 0;
}