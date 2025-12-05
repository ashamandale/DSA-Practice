//here is an integer array nums sorted in ascending order(withdistinctvalues).Priortobeingpassedtoyourfunction,numsispossiblyrotatedatanunknownpivotindexk(1<=k<nums.length)suchthattheresultingarrayis[nums[k],nums[k+1],...,nums[n-1],nums[0],nums[1],...,nums[k-1]](0-indexed).Forexample,[0,1,2,4,5,6,7]mightberotatedatpivotindex3andbecome[4,5,6,7,0,1,2]//Given the array nums after the possible rotation and an integer target,return the indexof target if it is 
//in nums,or -1 if it is not in nums

#include<iostream>
using namespace std;

int searchInRotatedSortedArray(int *arr,int n, int target){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){         //checking mid value
            return mid;
        }
        
        //checking left half is sorted or not
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target <=arr[mid]){
                end=mid-1;   //search in left half.
            }
            else{
                start=mid+1; // search in right half
            }
        }
        else{
            if(arr[ mid]< target && target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}


int main(){
int arr[]={4,5,6,0,1};
int n= sizeof(arr)/sizeof(int);
int target=0;
cout<<searchInRotatedSortedArray(arr,n,target);
   

    return 0;
}
