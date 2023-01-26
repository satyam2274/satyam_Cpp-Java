#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
}

int main() {
   int size;
   cin>>size;
   int arr[size];
   for(int i=0; i<size; i++){
       cin>>arr[i];
   }
   BubbleSort(arr,size);
   for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}