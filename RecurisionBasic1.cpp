#include <iostream>
using namespace std;


void Descendingprint(int no){
    if(no==0){
        return;
    }
        cout<<no<<endl;
        Descendingprint(no-1);
}
int main() {
    int no = 5;
    Descendingprint(no);
    return 0;
}
// output 5 4 3 2 1