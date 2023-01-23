Declare the first array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one.

Then again declare a second array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one. Then print the index at which you find the first non matching number in the array.

Input Format
/*
First Int Value N representing Size of array Then N Integer values Representing the values of Arr1 Then Again N int values representaing the value of arr2

Constraints

NA

Output Format

idx of arr2 where you find first non matching integer value

Sample Input 0

5
10
20
30
40
50
10
20
23
40
52
Sample Output 0

2
Explanation 0

First NON MATCHING INT value is 23 that is on idx 2 of arr2
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    if(arr1[i]!=arr2[i]){
        cout<<i;
        break;
       }
    }
    return 0;
}
