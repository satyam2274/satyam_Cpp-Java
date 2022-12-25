#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*Take n as an integer input. Declare the first array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one.

Declare the second array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one.

Then print “true” if the arrays are equal and print “false” if the array is not equal.

Definition of Equal Arrays: Arrays whose size is equal and whose elements at the corresponding indexes are the same

Input Format

A number n denoting array1 size n numbers representing elements of array1 A number m denoting array2 size m numbers representing elements of array2

Constraints

1<=n,m<=1000000 1<=array1[i]<=1000000 1<=array2[i]<=1000000

Output Format

Boolean value

Sample Input 0

5
1 2 3 4 5
5 
1 2 3 4 5
Sample Output 0

true
Explanation 0

Since size of both arrays are same. And array1[i]==array2[i] is same for all 0<=i<=array.length.Therefore answer is true.
*/
int main() {
    int a,b;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    cin>>b;
    int arr1[b];
    for(int j=0; j<b; j++){
        cin>>arr[j];
    }
     int len1 = sizeof(arr)/sizeof(arr[0]);
     int len2 = sizeof(arr1)/sizeof(arr[0]);
    if(len1 == len2){
        cout << "true";
    }else{
        cout << "false";
    }
    
    return 0;
}
