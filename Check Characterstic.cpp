/*
For each index,

Store 1 at that index if the element at that index is greater than zero.

Store 0 at the index if the element at that index is equal to zero.

Store -1 at the index if the element at that index is less than zero.

In the end print the complete array one by one.

Input Format

a number n representing size of array

N numbers representing elemnts of array.

Constraints

1

-10^6<=n<=10^6

Output Format

n numbers in single line.

Sample Input 0

5
-12 23 0 12 -19
Sample Output 0

-1 1 0 1 -1
Explanation 0

Since value at index 0 is negative therefore we store -1 at index 0. similarly value at index 1 is postive therefore we store 1 at index 1. similarly value at index 2 is zero therefore we store 0 at index 2. And so on.
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    
    if(arr[i]>0)
        arr[i]=1;
    else if(arr[i]<0)
        arr[i]=-1;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}