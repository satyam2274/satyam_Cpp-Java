#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
/*
Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26
100 37
*/


int main() {
	int min;
	int max;
	int s;
	cin>>min>>max>>s;
	for(int i=min;i<=max;i=i+s){
		int c=5*(i-32)/9;
		//int c =5/9*(i–32);
		cout<<i<<" "<<c<<endl;
    }
	
	
	return 0;
}