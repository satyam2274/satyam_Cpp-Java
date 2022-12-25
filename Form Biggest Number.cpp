/*
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.
Input Format
First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .
Constraints
1<=t<=100
1<=m<=100
1<=A[i]<=10^5
Output Format
Print the largest value.
Sample Input
1
4
54 546 548 60
Sample Output
6054854654
Explanation
Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.
*/
#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
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
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				string xy=to_string(arr[i]).append(to_string(arr[j]));
				string yx=to_string(arr[j]).append(to_string(arr[i]));
				if(yx>xy){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}
