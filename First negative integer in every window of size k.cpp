/*
You are given given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.

Input Format
First line contains integer t as number of test cases. Each test case contains two lines. First line contains two integers n and k where n is length of the array and k is the size of window and second line contains n space separated integer.

Constraints
1 < t < 10 1< n, k < 10000000

Output Format
For each test case you have to print the required output as given below.

Sample Input
2
8 3
12 -1 -7 8 -15 30 16 28
 8 4
12 -1 -7 8 -15 30 16 28
Sample Output
-1 -1 -7 -15 -15 0 
-1 -1 -7 -15 -15
Explanation
For first test case : Subarray of window size 3 is ( 12 -1 -7), (-1, -7, 8), and so on.. Take first negative number from each window and print them.
*/
        
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
int i=0,j=0;
queue<int> q;
while(j<n){
if(arr[j]<0) q.push(arr[j]); //if current element is negative, push it to queue
if(j-i+1<k) j++; //if size of window is less than k, increase j
else if(j-i+1==k){ //if size of window is equal to k
if(q.empty()) cout<<0<<" "; //if queue is empty, print 0
else cout<<q.front()<<" "; //else print front of queue
if(arr[i]<0) q.pop(); //if element going out of window is negative, remove it from queue
i++; //increase i
j++; //increase j
}
}
cout<<endl;
}
return 0;
}