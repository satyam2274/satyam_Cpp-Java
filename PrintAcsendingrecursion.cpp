#include <iostream>
using namespace std;
/*
output
1
2
3
4
5
*/

void AscendingPrint(int no){
    if(no==6){
        return;
    }
    cout << no << endl;
    AscendingPrint(no+1);
}
int main() {
    int no = 1;
    AscendingPrint(no);
    return 0;
   
}
