#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }

}

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int midIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[midIdx]){
                midIdx=j;
            }
        }
        swap(arr[i],arr[midIdx]);
    }
  printArr(arr,n);
}


int main(){
int arr[5]={3,2,8,1,7};
selectionSort(arr,5);
    return 0;
}
