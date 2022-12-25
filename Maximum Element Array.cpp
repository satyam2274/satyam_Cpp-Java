#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
For the given array having N elements, find the maximum element of the array.

Input Format

First line will be N no of elements, second line contain N elements

Constraints

1<=N<=10^5

Output Format

Print Maximum element.

Sample Input 0

5
1 2 3 4 5        
Sample Output 0

5
Explanation 0

5 is the maximum element in the array.
*/

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    
    return 0;
}
