#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n,i;

    //Length of array
    cout<<"Enter your number"<<endl;
    cin>>n;

    //Input in Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     //output of Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}