/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take N more inputs and store that in another array. Write a function which gives the intersection of two arrays in an ArrayList of integers and Print the ArrayList.

Input Format
First line contains N denoting the size of the two arrays. Second line contains N space separated integers denoting the elements of the first array. Third line contains N space separated integers denoting the elements of the second array.

Constraints
Length of Arrays should be between 1 to 100000.

Output Format
Display the repeating elements in a comma separated manner enclosed in square brackets. The numbers should be sorted in increasing order.

Sample Input
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2
Sample Output
[1, 1, 2, 2, 3]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++) cin>>arr1[i];

    for(int i=0;i<n;i++) cin>>arr2[i];

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    int it1=0;
    int it2=0;

    int ansarr[n];
    int ans=0;
    while(it1<n && it2<n){
        if(arr1[it1]==arr2[it2]){
            ansarr[ans]=arr1[it1];
            ans++;
            it1++;
            it2++;

        }
        else if(arr1[it1]<arr2[it2]){
            it1++;
        }
        else{
            it2++;
        }
    }
    cout<<"[";
    for(int i=0;i<ans-1;i++){
        cout<<ansarr[i]<<", ";

    }
    cout<<ansarr[ans-1]<<"]";

    return 0;
}