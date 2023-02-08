/*
Take the array of size n and their values from user. And Print all the pairs in the array.

Input Format

An integer number n representing size of array.

N numbers representing elements of the array and all element will be unique.

Constraints

1<=n<=100000

0<=array[index]<=100000

Output Format

See the DESCRIPTION

Sample Input 0

5
1 2 3 4 5
Sample Output 0

1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
Explanation 0

since we are given 5 number.

Therefore 1st number can pair up with next 4 numbers.

similarly 2nd number can pair up with next 3 numbers as pairing with first number will result same pair we have achieved when 1st number paired with 2nd.therfore we can pair with the next remaining numbers.

Therefore 3rd number i.e 3 pair with 4 and 5 only.And so on.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int GreaterAtRight(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
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