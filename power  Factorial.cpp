#include <iostream>
using namespace std;
// 2 ki power 4 = 16
int Power(int n){
    // base case
    if(n==0){
        return 1;
    }
    int choti = Power(n-1);
    int badi = 2*choti;
    return badi;
}

int main() {
    int n;
    cin>>n;
    int ans = Power(n);
    cout<< ans<<endl;
}
