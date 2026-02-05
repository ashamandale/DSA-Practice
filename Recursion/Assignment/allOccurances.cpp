//Quetion 1
#include<iostream>
using namespace std;
void allOccurances(int arr[],int n,int i,int key){
    if (i==n){
        return;
    }
    if(arr[i]==key){
        cout<<i<<" ";
    }
    allOccurances(arr,n,i+1,key);
}
int main(){
    int arr[]={3,2,4,5,6,2,7,2,2};
    int n=9;
    int key=2;
    allOccurances(arr,n,0,key);
    return 0;
}