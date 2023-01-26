#include <iostream>
using namespace std;
bool  BinarySearch(int arr[],int s , int e  , int key){
    if(s>e){
        return false;
    }
    int mid = (s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return BinarySearch(arr,mid+1,e,key);
    }
    else{
        return BinarySearch(arr,mid-1,s,key);
    }
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int s = arr[0];
    int e = arr[size-1];
    int ans = BinarySearch(arr,s,e,key);
        cout<<"yes Key is Present";
        return 0;

}
