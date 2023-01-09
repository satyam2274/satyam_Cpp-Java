/*
Input Format
The first line consists of number of test cases T. Each test case consists an integer N as number of towers and next line contains the N space separated integers.

Constraints
1 <= N <= 1000000 1 <= t <= 10 0 <= A[i] <= 10000000

Output Format
Print how much unit of water collected among towers for each test case.

Sample Input
2
6
3  0  0  2  0  4
12
0  1  0  2  1  0  1  3  2  1  2  1
Sample Output
10
6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){// post decrement
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++) {
            cin>>arr[i];
        }
        int amount=0;
        for(int i=1;i<=size-2;i++){
            // maximum find krna left hand side k liye
            int left=arr[i];
            for(int j=0;j<i;j++){
                left=max(arr[j],left);
            }
            // maximum find krna right hand side k liye.
            int right=arr[i];
            for(int j=i+1;j<=size-1;j++){
                right=max(right,arr[j]);
            }
            // amount to be storred
            amount=amount+min(left,right)-arr[i];

        }
        cout<<amount<<endl;
        // testcase--;

    }



    return 0;
}