#include <iostream>
using namespace std;
/*
find number of possible ways of starecase using recursion jump only 1 and 2
input :-- 4
output :-- 5
*/

int ways(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;\
    }
    return ways(n-1)+ways(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}