#include <iostream>
using namespace std;
/*

Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<n-j<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<n-i;j++)
        {
            cout<<" "<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<n-i+j<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++)
    {
        int j;
        for(int j=0;j<=n-i;j++)
        {
            cout<<n-j<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<" "<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<" "<<" ";
        }
        for(int k=0;k<n+2-j;k++)
        {
            cout<<k+j-1<<" ";
        }
        cout<<endl;
    }
	return 0;
}