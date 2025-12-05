//ReverseArray using 2 Ponter Approch.

#include<iostream>
using namespace std;

void printArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int st=0;
    int end=n-1;
    while(st < end){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    printArray(arr,n);
    return 0;
}