#include <iostream>
using namespace std;
bool Sorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool Remaining = Sorted(arr+1,size-1);
        return Remaining;
    }
}
int main() {
   int arr[5] = {1,2,3,4,5};
   int size = 5;
   bool ans = Sorted(arr,size);
   if(ans){
       cout<<"Array is Sorted"<< endl;
   }else{
       cout<<"Array is not Sorted"<<endl;
   }
}
