#include <iostream>
using namespace std;
/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
*/



int main() {
    int n;
	cin>>n;
	for(int i=1;i<n;i++){
		int k=1;
		for(int j=1;j<n;j++){
			if(j<=i)
				cout<<k++<<"\t";
			else
				cout<<"\t";
		}
		for(int j=n;j>=1;j--){
			if(j<=i)
				cout<<--k<<"\t";
			else
				cout<<"\t";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
		cout<<i<<"\t";
	for(int i=n-1;i>=1;i--)
		cout<<i<<"\t";
	return 0;
}