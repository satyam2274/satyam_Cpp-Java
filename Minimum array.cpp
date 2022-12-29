#include <iostream>
using namespace std;
/*
Declare the first array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one. Print the minimum amongst all the elements of the array.

Input Format

N as Size of Array then N Int value as Arr[i] values

Constraints

NA

Output Format

Print the Minimum element in array

Sample Input 0

5
10
4
9
55
21
Sample Output 0

4
Explanation 0

4 is the minimum among all these
*/
    int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=arr[0];
        for(int i=1;i<n;i++){
            
            if(arr[i]<min){
                min=arr[i];
            }
        }
    cout<<min;
    
    return 0;
}