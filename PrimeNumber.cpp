#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Write a Java program to print all Prime numbers between 1 to n.

Input Format

First line contain N.

Constraints

1<=N<=100000

Output Format

Print Prime numbers upto N with space seperation.

Sample Input 0

5
Sample Output 0

2 3 5
*/

bool isPrime(int n)
{
      if(n == 1 || n == 0) return false;
      for(int i = 2; i < n; i++)
      {
        if(n % i == 0) return false;
      }
      return true;
}

int main() {
    int N;
    cin>>N;
      for(int i = 1; i <= N; i++){
          if(isPrime(i))
          {
            cout << i << " ";
          }
    }
 
    return 0;
} 
  