#include<iostream>
using namespace std;
int main(){
    int arr[]={8,6,9,4,3,12};
    int n=6;
    int max=arr[0];

     //output of Array
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<"Max value is assigning to "<<arr[i]<< endl;
        }
    }
    cout<<" Max value ="<<max;

    return 0;
}