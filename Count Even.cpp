#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Given an integer n, the task is to define an integer array arr[] of size n &

Print the Count / Number of even elements in the array.

Input Format

An integer n, which is the size of the array arr[]
n integers each in a new line, depicting the elements of the array arr[]
Constraints

0 <= arr.length <= 1000
0 <= arr[i] <= 1000
Output Format

Single line of output

An integer, which is the number of even numbers in the array.
Sample Input 0

5
2
3
4
2
8
Sample Output 0

4
Explanation 0

Since the array is of length 5 and it's elements are {2, 3, 4, 2, 8} therefore, output will be :- 4 , As only 2, 4, 2, 8 are even numbers in the array, thus making the count of even number equal to 4
*/

int main() {
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
        cout<<count;
    return 0;
}
