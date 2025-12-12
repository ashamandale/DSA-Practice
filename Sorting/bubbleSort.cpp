#include<iostream>
using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){   //Array is already Sorted.....TC is O(1)
            return;  
        }
    }
    printArr(arr,n);

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    bubbleSort(arr,10);
    return 0;
}