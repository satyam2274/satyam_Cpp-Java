#include <iostream>
using namespace std;
/*
find number of ways in a starecase and jump k time find possible.
input :---- 4 3
output:-----  7
*/

int ways(int n,int k){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int sum = 0;
    for(int jump = 1; jump<=k; jump++){
        sum = sum + ways(n-jump,k);
    }
    return sum;

}
int main() {
    int n,k;
    cin>>n>>k;
    cout<<ways(n,k);

}
