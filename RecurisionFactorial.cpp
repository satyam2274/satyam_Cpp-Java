#include <iostream>
using namespace std;

int Factorial(int no){

    if(no==1){
        return 1;
    }
    int val = no * Factorial(no-1);
    return val;
}

int main() {
    int no = 5;
    cout<<Factorial(no);
    
}
// output = 120
