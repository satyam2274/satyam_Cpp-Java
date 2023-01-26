#include <iostream>
using namespace std;

/*
input :  --  1234
output :-- one two three four
input :--  5678
output :-- five six seven eight
*/

void SayDigit(int n , string arr[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main() {
    string arr[10] = {"zero","one","tow","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    SayDigit(n , arr);
}