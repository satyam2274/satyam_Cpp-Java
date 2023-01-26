#include <iostream>
using namespace std;
/*
input :-  abba
output :-  it is a palindrom
input :- satyam
output :- it is not palindrom
*/
bool CheckPalindrome(string str , int i , int j){
    if(i>j){
        return true;
    }
    if(str[i]>str[j]){
        return false;
    }else{
        return CheckPalindrome(str , i+1 , j-1);
    }
}

int main() {
    string name;
    cin>>name;
    bool IsPalindraom = CheckPalindrome(name , 0 , name.length()-1);
    if(IsPalindraom){
        cout<<"yes it is Palindrom"<<endl;
    }else{
        cout<<" no it is a not Palindrom"<<endl;
    }
}
