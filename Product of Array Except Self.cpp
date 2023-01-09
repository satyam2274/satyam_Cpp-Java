/*
Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].
Input Format
First line contains integer N as size of array.
Next line contains a N integer as element of array.
Constraints
arr[i]<=10000000
Output Format
print output array
Sample Input
4
1 2 3 4
Sample Output
24 12 8 6 
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long left[n];
    long long right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    long long ans[n];
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*arr[i];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*arr[i];
    }
    ans[0]=right[1];
    for(int i=1;i<n-1;i++){
        ans[i]=left[i-1]*right[i+1];
    }
    ans[n-1]=left[n-2];
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}