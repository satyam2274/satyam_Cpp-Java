/*
Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted in Increasing Order, and false otherwise.
Input Format
N x y z
Constraints
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array
Output Format
true OR false
Sample Input
5
1 2 3 4 5
Sample Output
true
*/

#include<iostream>
using namespace std;
bool check(int arr[],int n){
	if(n==1)
		return true;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int  a=check(arr,n);
	// a==1?cout<<"true":cout<<"false";
    if(a==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
	return 0;
}