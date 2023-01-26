#include <iostream>
using namespace std;
/*
print a reverse String 
input :-- abcde
output :-- edcba
*/
void revesestring(string &str , int i , int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    revesestring(str,i,j);
}

int main() {
    string name = "Satyam";
    revesestring(name,0,name.length()-1);
    cout<<name<<endl;
}
