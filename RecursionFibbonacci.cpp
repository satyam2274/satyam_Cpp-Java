
// find fobbonacci seriese we have given no we have to that fibbonacci number
#include <iostream>
using namespace std;

int fibbonacci(int no){
    if(no==1){
        return 0;
    }
    if(no==2){
        return 1;
    }

    int value = fibbonacci(no -1)+fibbonacci(no-2);
    return value;
}

int main() {
    int no;
    cin>>no;
    cout << fibbonacci(no)<< endl;

    return 0;
    
}
