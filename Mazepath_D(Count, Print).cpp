/*
Take as input N1 and N2, both numbers.
N1 and N2 is the number of rows and columns on a rectangular board.
Our player starts in top-left corner of the board and must reach bottom-right corner.
In one move the player can move 1 step horizontally (right) or 1 step vertically (down)
or 1 step diagonally (south-east).
a. Write a recursive function which returns the count of different ways
the player can travel across the board. Print the value returned.
b. Write a recursive function which prints moves for all valid paths across the board
(void is the return type for function).
Input Format:
Enter the number of rows N1 and number of columns N2
Constraints:
None
Output Format:
Display the total number of paths and print all the possible paths in a space separated manner
Sample Input:
3
3
Sample Output:
13
VVHH VHVH VHHV VHD VDH HVVH HVHV HVD HHVV HDV DVH DHV DD
Time Limit: 4 sec
*/
#include<iostream>
using namespace std;
int maze(int a[100][100],int n,int m,int i,int j)
{
    int c=0;
    if(i==n-1 && j==m-1)
    {
        return 1;
    }
    if(i==n-1)
    {
        return maze(a,n,m,n-1,j+1);
    }
    if(j==m-1)
    {
        return maze(a,n,m,i+1,m-1);
    }
    c+=maze(a,n,m,i+1,j);
    c+=maze(a,n,m,i,j+1);
    c+=maze(a,n,m,i+1,j+1);
    return c;
}
void maze1(int a[100][100],int n,int m,int i,int j,char b[100],int x)
{
    if(i==n-1 && j==m-1)
    {
        b[x]='\0';
        cout<<b<<" ";
        return;
    }
    if(i==n-1)
    {
        b[x]='H';
        maze1(a,n,m,n-1,j+1,b,x+1);
        return;
    }
    if(j==m-1)
    {
        b[x]='V';
        maze1(a,n,m,i+1,m-1,b,x+1);
        return;
    }
    b[x]='V';
    maze1(a,n,m,i+1,j,b,x+1);
    b[x]='H';
    maze1(a,n,m,i,j+1,b,x+1);
    b[x]='D';
    maze1(a,n,m,i+1,j+1,b,x+1);
    return;
}
int main()
{
    int a[100][100],n,m;
    char b[100];
    cin>>n;
    cin>>m;
    cout<<maze(a,n,m,0,0)<<endl;
    maze1(a,n,m,0,0,b,0);
	return 0;
}