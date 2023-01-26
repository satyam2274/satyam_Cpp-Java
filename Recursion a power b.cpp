#include <iostream>
using namespace std;
/*
input a = 2 , b = 4
output = 2^4 = 16
*/

int Power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = Power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    int ans = Power(a,b);
    cout<< ans<< endl;
}
