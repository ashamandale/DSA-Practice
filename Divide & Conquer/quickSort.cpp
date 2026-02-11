//Quick Sort
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition (int arr[],int si, int ei){
   int i=si-1;
   int pivot=arr[ei];

   for(int j=si;j<ei;j++){
    if(arr[j] <= pivot){
        i++;
        swap(arr[i],arr[j]);
    }
   }
   i++;
   swap(arr[i],arr[ei]);
   return i; //pivot index
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pivotIdx= partition( arr, si, ei);
    quickSort(arr,si,pivotIdx-1);  //left half
    quickSort(arr,pivotIdx+1,ei);  //right half
}
int main(){
    int arr[]={5,6,8,2,6,9};
    int n=6;
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}