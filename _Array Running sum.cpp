#include <iostream>
using namespace std;
/*
Given an array nums of length n. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Input Format
First line contains an integer n representing number of elements. Next line contains n integers denoting array elements.

Constraints
1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6

Output Format
An integer representing running sum array of the given array

Sample Input
4
1 2 3 4
Sample Output
1 3 6 10
Explanation
Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/
int main() {
   int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
        cout<<sum<<" ";
    }
    return 0;
}