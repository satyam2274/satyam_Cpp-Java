/*
Given an array of size n with intial values. Take left, right as integer inputs such that 0<=left, right

Then update the given array from the index-left till the index-right(both left index and right index included) with the element x. In the end print all the elements of the array such that each element is printed in a separate line.

Input Format

A integer number n representing size of array.

N integer numbers representing elements of an array.

two Integer number representing range i.e left and right.

An integer number x.

Constraints

1<=n<=100000

0<=array[index]<=100000

0<=left<=right

0<=x<=100000

Output Format

N numbers in a single line.

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
2 8
0
Sample Output 0

1 2 0 0 0 0 0 0 0 10
Explanation 0

We are given range of 2 to 8, so we update all the index from left to right with given value of x i.e 0. And printed the answer in sinle line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int l,r;
    cin>> l >> r;
    int x;
    cin>>x;
    for(int i=l;i<=r; i++){
        arr[i]=x;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
