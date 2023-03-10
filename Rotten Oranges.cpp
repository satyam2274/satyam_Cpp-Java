/*
Given a 2D array of dimension r*c where each cell in the array can have values 0, 1 or 2 which has the following meaning: 0 : Empty cell 1 : Cells have fresh oranges 2 : Cells have rotten oranges

So, we have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. If it is impossible to rot every orange then simply return -1.

Input Format
The first line of input contains an integer T denoting the number of test cases.
Each test case contains two integers r and c, where r is the number of rows and c is the number of columns in the array arr and take r*c more inputs in an array arr.

Constraints
1 <= T <= 100
1 <= r <= 100
1 <= c <= 100
0 <= a[i] <= 2

Output Format
Print an integer which denotes the minimum time taken to rot all the oranges (-1 if it is impossible).

Sample Input
1
3 5
2 
1 
0 
2 
1 
1 
0 
1 
2 
1 
1 
0 
0 
2 
1
Sample Output
2
*/
#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};  // direction vectors for up, down, left and right
int dy[] = {0, 0, -1, 1};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> arr(r, vector<int>(c));
        queue<pair<int, int>> q;
        int fresh_count = 0;  // count of fresh oranges
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 2) {
                    q.push({i, j});  // push rotten oranges in the queue
                } else if (arr[i][j] == 1) {
                    fresh_count++;  // count fresh oranges
                }
            }
        }
        int time_taken = 0;
        while (!q.empty()) {
            int size = q.size();
            bool rotten_found = false;
            for (int i = 0; i < size; i++) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int nx = x + dx[j];
                    int ny = y + dy[j];
                    if (nx >= 0 && nx < r && ny >= 0 && ny < c && arr[nx][ny] == 1) {
                        arr[nx][ny] = 2;  // make fresh orange rotten
                        q.push({nx, ny});
                        fresh_count--;
                        rotten_found = true;
                    }
                }
            }
            if (rotten_found) {
                time_taken++;  // increment time if any fresh orange got rotten
            }
        }
        if (fresh_count == 0) {
            cout << time_taken << endl;  // all oranges got rotten
        } else {
            cout << -1 << endl;  // some fresh oranges were not reachable by rotten oranges
        }
    }
    return 0;
}

