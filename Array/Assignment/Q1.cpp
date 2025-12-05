//Given an integer array nums,return true if any value appears at 
//least twice in the array,and return false if every element is distinct.

#include<iostream>
using namespace std;
int containDuplicate(int *nums,int n)
{
     bool flag=false; //No Duplicates
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
         if(nums[i]==nums[j]){
            flag=true; //Duplicate found
         }         
        }
    }
    return flag;
}

int containDuplicate2(int *nums,int n)
{
    bool flag=false; //No Duplicates
    for(int i=0;i<n-1;i++){
         if(nums[i]==nums[i+1]){
            flag=true; //Duplicate found
         }         
    }
    
    return flag;
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<containDuplicate(arr,n)<<endl;
    //cout<<containDuplicate2(arr,n);
    return 0;
}