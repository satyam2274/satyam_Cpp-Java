/*
Take as input a 2-d array.Print the 2-D array in sprial form clockwise.
Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Constraints
Both M and N are between 1 to 10.
Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).
Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END
Explanation
For spiral level clockwise traversal, Go for first row-> last column ->last row -> first column and then do the same traversal for the remaining matrix .
*/
#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	// m=m-1;
	// n=n-1;
	int ec=m-1,sc=0;
	int er=n-1,sr=0;
	int i=0;
	int j=0;
	

	
	while(sc<=ec && sr<=er ){
		//print first column
		for(int i=sc;i<=ec;i++){
			cout<<arr[sr][i]<<", ";	
		}
		sr++;
		
		for(int i=sr;i<=er;i++){
			cout<<arr[i][ec]<<", ";
		}
		ec--;
		if(sr<=er){
			for(int i=ec;i>=sc;i--){
				cout<<arr[er][i]<<", ";

			}
			er--;
		}
		
			
		
		if(sc<=ec){
			
			for(int i=er;i>=sr;i--){
				cout<<arr[i][sc]<<", ";
			}
			sc++;
		}
		
	}
	cout<<"END";
	return 0;
}