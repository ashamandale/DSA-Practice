//Convert 1D Array Into 2D Array

#include<iostream>
using namespace std;
void construct2DArray(int org[],int len,int m,int n){
    //check conversion if not possible
    if(len != m*n){
       cout<<"Empty Array";
       return;
    }
    int arr[m][n]; //Initialization of 2D Array
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=org[k++];
        }
    }
    //printing 2D Array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
 
}

int main(){
int org[4]={1,2,3,4};
int m=2,n=2;
int len=4;
construct2DArray(org,len,m,n);
return 0;
}