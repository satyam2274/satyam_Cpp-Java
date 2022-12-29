#include <iostream>
using namespace std;
/*
Declare the first array of size n that stores values of int data-type. Then take n integer inputs and store them in the array one by one.

For each index print the sum of all the elements except the element present at that index..

Input Format

N as Size of Array then N Int value as Arr[i] values

Constraints

NA

Output Format

Print value of sum of array except that particular idx

Sample Input 0

4
2
7
8
9
Sample Output 0

24
19
18
17
Explanation 0

Sum of Arrays Element is 26

26-2=24

26-7=19

26-8=18

26-9=17
*/
int main(){
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        for(int i=0;i<n;i++){
            int num=sum-arr[i];
            cout<<num<<endl;
        }
    return 0;
}
