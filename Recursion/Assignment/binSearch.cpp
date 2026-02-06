//Binary Search using recursion
#include<iostream>
#include<string>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
    if(start > end ){
        return -1;
    }
    int mid=(start+end)/2;
    
    //key found
    if(arr[mid] ==key){
        return mid;
    }
    //Search in left half
    if(key < arr[mid]){
        return binarySearch (arr,start,mid-1,key);
    }

    //Search in right half
    if(key > arr[mid]){
        return binarySearch (arr,mid+1,end,key);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int key=2;
    int index=binarySearch(arr,0,n-1,key);
    cout<<index;
    return 0;
}