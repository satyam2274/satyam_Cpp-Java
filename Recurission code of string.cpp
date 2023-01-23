/*
Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, …. z=26. Write a recursive function (return type Arraylist) to print all possible codes for the string. E.g. for “1123” possible codes are aabc, kbc, alc, aaw, kw.

Input Format
Enter a number

Constraints
None

Output Format
Display all the possible codes

Sample Input
1125
Sample Output
[aabe, aay, ale, kbe, ky]
*/

#include<iostream>
using namespace std;
void rec(char *s,int i,char *out,int j,string *output,int &k){
    if(s[i]=='\0'){
        out[j]='\0';
        output[k++]=out;
        return;
    }
    out[j]=s[i]-'0'+96;
    rec(s,i+1,out,j+1,output,k);
    if(s[i+1]&&s[i+1]-'0'<=6&&s[i]-'0'<=2){
        int no=(s[i]-'0')*10+s[i+1]-'0';
        out[j]=96+no;
        rec(s,i+2,out,j+1,output,k);
    }
}
int main() {
    char s[10000],out[10000];
    cin>>s;
    string output[10000];
    int k=0;
    rec(s,0,out,0,output,k);
    for(int i=0;i<k;i++){
        if(i==0){
            cout<<"["<<output[i];
        }
        else
        cout<<", "<<output[i];
    }
    cout<<"]";
	return 0;
}