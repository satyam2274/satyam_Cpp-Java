/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format
The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

Constraints
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3
Explanation
Find any pair of elements in the array which has sum equal to target element and print them.
*/
#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
int main() {
	using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	int target;
	cin>>target;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int l=0;
	int r=n-1;
	while(l<r){
		if(arr[l]+arr[r]==target){
			cout<<arr[l]<<" and "<<arr[r]<<endl;
			l++;
			r--;
		}
		else if(arr[l]+arr[r]<target)
			l++;
		else
			r--;
	}
	return 0;
}
