#include <iostream>
using namespace std;
/* if value presnet then get Ans Prasent And if 
5
1 2 5 1 3
6
Ans : Key is not present
5
1 2 5 1 3
3
output :-- Key Is Not Present
*/


int LinearSearch(int arr[],int size,int key){
    if(size == 0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        int remainning = LinearSearch(arr+1,size-1,key);
        return remainning;
    }
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans =  LinearSearch(arr,size,key);
    if(ans){
        cout<<"Key is present";
    }else{
        cout<<"Key is not present";
    }

}
