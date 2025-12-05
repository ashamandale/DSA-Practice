//Given n integer array nums,find a subarray that has the largest product,and return the product.
//The testcases are generated so that the answer will fit ina 32-bit integer
#include<iostream>
using namespace std;

int maxProductSubArray(int *nums,int n){
    int maxProd=nums[0];
    int minProd=nums[0];
    int ans=nums[0];

    for(int i=1;i<n;i++){
        int curr=nums[i];
    
        int prevMax=maxProd;
        int prevMin=minProd;

        maxProd=max(curr,max(curr*prevMax,curr*prevMin));
        minProd=min(curr,min(curr*prevMax,curr*prevMin));

        ans=max(ans,maxProd);

    }
    return ans;
}

int main(){
    int arr[]={-2,3,-4};
    int n =sizeof(arr)/sizeof(int);
    cout<<maxProductSubArray(arr,n);

    return 0;
}