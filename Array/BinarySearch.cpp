#include<iostream>
using namespace std;

int binarySearch(int *arr,int n, int key)
{
    int st=0;
    int end=n-1;
    while(st<=end){
    
        int mid=(st+end)/2;

        if(arr[mid]== key){
            return mid;
        }
        else if(arr[mid] < key){  //saerch in second half
            st=mid+1;
        }
        else{
            end=mid-1;  //search in first half
        }
       
    }
 return-1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
   cout<<binarySearch(arr,n,10);

return 0;
}