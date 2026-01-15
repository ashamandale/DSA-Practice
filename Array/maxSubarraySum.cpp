

#include<iostream>
using namespace std;

void maxSubarraySum(int *arr,int n){
    int maxSum= INT16_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum: "<<maxSum;

}



void maxSubarraySum2(int *arr,int n){
    int maxSum= INT16_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);  
        }     
    }
    cout<<"maximum subarray sum: "<<maxSum;

}


//Kadane's Algorithm

void maxSubarraySum3(int *arr,int n){
    int maxSum= INT16_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"maximum subarray sum: "<<maxSum;

}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr) / sizeof(int);
    //maxSubarraySum(arr,n);
    //maxSubarraySum2(arr,n);
    maxSubarraySum3(arr,n);
    return 0;
}