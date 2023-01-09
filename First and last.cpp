/*
Given an 0-index based array arr Non Decreasing sorted order. Alex stands at 0th index and Novo stands at last index. They both want to meet at target.
A meetup is to be assumed when Alex will stand at starting position and Novo stand at ending position of given target value in array.Find the required Alex and Novo position.
Try to solve the O(logN) time complexity.

Input Format
First line takes an Integer N(size of array) Second line contains N elements. Third line contains target as input.

Constraints
0<=N<=109
-109<=target,arr[i]<=109

Output Format
Print required index where Alex and Novo should be stands if meetup possible otherwise print -1 -1.

Sample Input
10 
-2 -1 -1 0 3 3 3 3 7 22
3
Sample Output
4 7
Explanation
For Sample Input 1, the starting position of target=3 is 4th index and the ending position is at 7th index in the array. For Sample Input 2, target=4 is not found in the array, so no meetup possible.Hence print -1 -1.
*/
#include <iostream>
using namespace std;

int func1(int arr[],int target,int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int func2(int arr[],int target,int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int firstoccurence = func1(arr,target,n);
    int lastoccurence = func2(arr,target,n);
    cout<<firstoccurence<<" "<<lastoccurence<<endl;
}