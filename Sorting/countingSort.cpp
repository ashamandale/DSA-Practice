#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

void countingSort(int arr[],int n){
    int freq[100000]={0}; ///range
    int min_Val=INT8_MAX,max_Val=INT8_MIN;
    for( int i=0;i<n;i++){
      min_Val=min(min_Val,arr[i]);
      max_Val=max(max_Val,arr[i]);
    }
    //1st Step
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i =min_Val,j=0;i<=max_Val;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    printArr(arr,n);
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    countingSort(arr,8);
    
    return 0; 
}