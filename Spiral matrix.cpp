#include <bits/stdc++.h>
using namespace std;
/*
input<-----
4X4
1 2 3 4
5 6 7 8
1 2 3 4
1 4 7 8
output<------
1 2 3 4 8 4 8 7 4 1 1 5 6 7 3 2
*/

int main(){

    int n;
    int m;
    cin >> n >> m;

    int arr[n][m];

    for (int row = 0 ; row < n ; row++ ){
        for (int col = 0 ; col < m ; col++){
            cin >> arr[row][col];
        }
    }

    cout << "Spiral traversal of given matrix is : "<< endl;

    int start_row = 0;  // blue
    int start_col = 0;  // green
    int last_col  =  m-1; // red
    int last_row  = n-1; // yellow
    int total_element = n*m;
    int cnt = 0;

    while ( cnt < total_element ){
        for (int i = start_col ; i <= last_col and cnt < total_element  ; i++){
            cout << arr[start_row][i] << " ";
            cnt += 1;
        }

        start_row++;

        for (int i = start_row ; i <= last_row and cnt < total_element; i++){
            cout << arr[i][last_col] << " ";
            cnt += 1;
        }

        last_col--;

        for (int i = last_col ; i >= start_col and cnt < total_element ; i--){
            cout << arr[last_row][i] << " ";
            cnt += 1;
        }

        last_row--;

        for (int i = last_row ; i >= start_row and cnt < total_element; i--){
            cout << arr[i][start_col] << " ";
            cnt += 1;
        }

        start_col++;
    }


    return 0;
}