/*

Shivam is having his Data Structure and Algorithms lab evaluation. His teacher gave him a list which has sequential access. Now, Shivam has to sort this given list in ascending order.

Input Format
First line contains n, size of list
Second line contains n numbers which are the values
Constraints
The size of list is in the range [0, 5 * 104].
-105 <= value <= 105

Output Format
Print the sorted list

Sample Input
3
3 2 1
Sample Output
1 2 3
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n); // sort the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
