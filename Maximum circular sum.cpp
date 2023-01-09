/*
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000

Output Format
Print the maximum circular sum for each testcase in a new line.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)
*/
#include<bits/stdc++.h>
// #include<iostream>
// #include<cmath>
// #include<climits>
using namespace std;

int kadane(int arr[],int n){
	int max_so_far = arr[0], max_ending = arr[0];

	for (int i = 1; i < n; i++)
	{

        if (arr[i] <= max_ending + arr[i]) {
            max_ending += arr[i];
        }
       
        else {
            max_ending = arr[i];
        }
		
		if (max_so_far < max_ending)
			max_so_far = max_ending;

		
	}
	return max_so_far;
}
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){

		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int result1=kadane(arr,n);
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[i];
			arr[i]=-arr[i];
		}
		int result2=kadane(arr,n);
		cout<<max(result1,sum+result2)<<endl;
	}
	return 0;
}