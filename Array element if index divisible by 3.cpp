#include <iostream>
using namespace std;
/*

Take n as an integer input. Declare an array of size n that stores value of int data-type. Then take n integer inputs and store them in the array one by one.

Then print all the elements of the array where the index is divisible by 3

Input Format

A number n denoting length of array n elements of array

Constraints

1<=n<=1000000 1<=arr[i]<=1000000

Output Format

See the Description

Sample Input 0

7
1
2
3
4
5
6
7
Sample Output 0

1 4 7 
Explanation 0

index 0 , 3 and 6 are the only multiple of three. therefore we have printed value at this index.
*/
int main() {
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        if(i%3==0){
            cout << arr[i] <<" ";
        }
    }
    return 0;
}