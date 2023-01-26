#include <iostream>
using namespace std;
int GetSum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
        int Remaining = GetSum(arr+1,size-1);
        int sum = arr[0] + Remaining;
        return sum;
    }
int main() {
   int arr[5] = {1,2,3,4,5};
   int size = 5;
   int sum = GetSum(arr,size);
       cout<<sum<<endl;
}
