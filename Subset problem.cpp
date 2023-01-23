/*
Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

a. Write a recursive function which prints subsets of the array which sum to target.

b. Write a recursive function which counts the number of subsets of the array which sum to target. Print the value returned.

Input Format
Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

Constraints
None

Output Format
Display the number of subsets and print the subsets in a space separated manner.

Sample Input
3
1
2
3
3
Sample Output
1 2  3
2
Explanation
Add 2 spaces between 2 subset solutions
*/

#include<bits/stdc++.h>
using namespace std;

// call by value
void func(vector<int>&arr , int index , int sum , vector<int> output , int target , int&count){

    // base case //
    if (index == (int)arr.size()){
        if (sum == target){
            count++;
            for (int i = 0 ; i < (int)output.size() ; i++){
                cout << output[i] <<" ";
            }
            cout <<" ";
        }
        return;
    }
    // recursions calls //
    output.push_back(arr[index]);
    func(arr , index+1 , sum + arr[index] , output , target , count);
    output.pop_back();

    func(arr , index+1 , sum , output , target , count);

}

int main() {

    int n;
    cin >> n;

    int target; int count = 0;

    vector<int> arr , output;

    for (int i = 1 ; i <= n ; i++){
        int x; cin >> x;
        arr.push_back(x);
    }

    cin >> target;

    func(arr , 0 , 0 , output , target , count);
    cout << endl;
    cout << count << endl;
    return 0;
}