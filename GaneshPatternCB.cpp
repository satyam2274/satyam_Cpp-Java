#include <iostream>
using namespace std;
/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.
*/



int main() {
    int n;
	cin>>n;
	for(int i=0;i<n/2;i++){
			for(int j=0;j<n;j++){
				if(j==0 || j==n/2){
					cout<<"*";
				}
				else if(j>0 && j<n/2){
					cout<<" ";
				}
				else{
					if(i==0)
						cout<<"*";
					else
						cout<<" ";
				}
			}
			cout<<endl;
		}
		for(int i=0;i<n;i++){
			cout<<"*";
		}
		cout<<endl;
		for(int i=n/2-1;i>=0;i--){
			for(int j=0;j<n;j++){
				if(j==n/2 || j==n-1)
					cout<<"*";
				else if(j>n/2 && j<n-1)
					cout<<" ";
				else{
					if(i==0)
						cout<<"*";
					else
						cout<<" ";
				}
			}
			cout<<endl;
		}
    
}
