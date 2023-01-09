#include<bits/stdc++.h>
using namespace std;

bool Allnegative(int arr[],int n){
	for(int i=0; i<n; i++){
		if(arr[i]>=0){
			return false;
		}
	}
	return true;
}

int MaximumSubarray(int arr[],int n){
	int ans = -1000000;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
		ans = max({ans,sum});
		if(sum<0){
			sum = 0;
		}
	}
	return ans;
}
int MinimumSubarray(int arr[],int n){
	int ans = 1000000;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
		ans = min({ans,sum});
		if(sum>0){
			sum = 0;
		}
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum+arr[i];
	}
	int maximum = MaximumSubarray(arr,n);
	int minimum = MinimumSubarray(arr,n);
	if(Allnegative(arr,n)==true){
		cout << maximum<<endl;
	}else{
		cout<<max({maximum,sum-minimum});
	}
	return 0;
}