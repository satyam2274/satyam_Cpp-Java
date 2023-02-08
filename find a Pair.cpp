/*
Given condition is that the array contains all the unique elements. Then take the sum as an integer input and print all the permutations of the pairs that add up to the given sum k.

Input Format

An integer number n representing size of array.

n integer numbers representing elements of the array.

an integer number k

Constraints

1<=n<=100000

0<=array[index]<=100000

0<=k<=1000000

Output Format

Print all pair that gives the sum equals to the given number k.

Sample Input 0

5
1 2 3 4 5
8
Sample Output 0

3 5
4 4
5 3
Explanation 0

Since arr[2]+arr[4] = 8

arr[3]+arr[3] = 8

arr[4]+arr[2] = 8
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


\
int pairofSum(int arr[],int key , int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    pairofSum(arr,key,n);
    
    return 0;
}
