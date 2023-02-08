/*
Take the array of size n and their values from user. And Print all the permutation pairs in the array from the last.

Input Format

An integer number n representing size of array.

N numbers representing elements of the array and all element will be unique.

Constraints

1<=n<=100000

0<=array[index]<=100000

Output Format

Print all pairs in differnt line.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

5 5
5 4
5 3
5 2
5 1
4 5
4 4
4 3
4 2
4 1
3 5
3 4
3 3
3 2
3 1
2 5
2 4
2 3
2 2
2 1
1 5
1 4
1 3
1 2
1 1
Explanation 0

Since we are given 5 number and started with last index. Therefore,firstly last number can pair up with all elements.

Similarly then 2nd last number can pair up with all elements and so on.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int GreaterAtRight(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=n-1;j>=0;j--){
                if(arr[i]<arr[j]){
                
                }
            
        cout<<arr[i]<<" "<<arr[j]<<endl;
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
    GreaterAtRight(arr,n);
    
    return 0;
}
