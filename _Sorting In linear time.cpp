/*
Given an array having n elements representing balls of various colours like red, white or blue, sort them in-place so that balls of the same colour are adjacent, with the colours in the order red, white and blue.
To represent the colour red, white, and blue we will use the integers 0, 1, and 2 respectively.
Note:You are not suppose to use the sort function for this problem.

Input Format
First line contains integer n as size of array. Next n lines contains a single integer as element of array.

Constraints
None

Output Format
Print the balls in order so that balls of same colour are adjacent.

Sample Input
6
2 0 2 1 1 0
Sample Output
0 0 1 1 2 2 
*/
#include<iostream>
using namespace std;
void swap_number(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=0,k=n-1;
	while(i<=k){
		if(arr[i]==0){
			swap_number(arr,i,j);
			i++;
			j++;
		}
		else if(arr[i]==1)
			i++;
		else{
			swap_number(arr,i,k);
			k--;
		}
			
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}