/*
Google Tower of Hanoi.

Using a helper stick (peg), shift all rings from peg A to peg B using peg C. All rings are initally placed in ascending order, smallest being on top.

No bigger ring can be placed over a smaller ring.

a. Write a recursive function which prints the steps required to solve the tower of Hanoi problem for N discs.

b. Write a recursive function which returns number of steps required to solve the tower of Hanoi problem for N discs.

Let T1 be the Source Tower, T2 be the Destination Tower and T3 be the Auxillary Tower.

Input Format
Enter the number of discs

Constraints
None

Output Format
Display the steps required to solve the tower and also print the total number of steps required

Sample Input
2
Sample Output
Move 1th disc from T1 to T3
Move 2th disc from T1 to T2
Move 1th disc from T3 to T2
3
*/

#include<bits/stdc++.h>
using namespace std;
int cnt;
void TowerofHanoi(int n , string src , string helper , string desc){

    // base case //
    if (n == 0){
        return;
    }

    TowerofHanoi(n-1 ,src  , desc  , helper);
    cout << "Move " << n << "th disc from " << src << " to " << desc << endl;
    cnt++;
    TowerofHanoi(n-1 , helper ,  src    , desc);
    return;
}



int main(){
    cnt = 0;
    int n;
    cin >> n;

    TowerofHanoi(n , "T1" , "T3" , "T2");
    cout<<cnt;
}