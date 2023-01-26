#include <iostream>
using namespace std;

void ReachHome(int src , int dest){
    // base case
    if(src = dest){
    cout<<" ghar pahuch gayaa ";
    return;
    }
    ReachHome(src+1 , dest);

}
int main() {
    int dest = 10;
    int src = 1;
    ReachHome(dest,src);
}