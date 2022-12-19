#include <iostream>
using namespace std;
/*
Take as input N, a number. Print the pattern as given in output section for corresponding input.

Input Format
Enter value of N

Constraints
Output Format
All numbers and stars are Space separated

Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
*/

int main() {
    int n,x=1,odd=0,even=0,a;
    cin>>n;
    while(n>0)
    {
        a=n%10;
        if(x%2==0)
        {
            even=even+a;
        }
        else
        {
            odd=odd+a;
        }
        x++;
        n=n/10;
    }
    cout<<odd<<endl;
    cout<<even;
}
