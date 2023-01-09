#include <iostream>
using namespace std;

void DecreasPart2(int no){
    if(no==6){
        return;
    }
    DecreasPart2(no+1);
    cout<<no<<endl;
}
int main() {
    int no = 1;
    DecreasPart2(no);
}
// output 5 4 3 2 1
