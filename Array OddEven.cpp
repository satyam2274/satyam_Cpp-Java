#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Write a Java Program to print Odd and Even numbers from an integer Array

Input Format

First line of input contains integer n denoting the size of array. Next line of input contains n space separated integers denoting the elements of array.

Constraints

1<=n<=10^4

Output Format

Print all odd numbers in first line, print all even numbers in second line.

Sample Input 0

6
1 2 5 6 3 2
Sample Output 0

1 5 3 
2 6 2 
Sample Input 1

8
1 2 3 4 5 6 7 8
Sample Output 1

1 3 5 7 
2 4 6 8 
*/

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
      if(arr[i]%2==1){
          cout<<arr[i]<<" ";
      }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
      if(arr[i]%2==0){
          cout<<arr[i]<<" ";
      }
    }
    return 0;
}
