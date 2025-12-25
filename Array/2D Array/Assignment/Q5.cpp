//Rotate Image     

#include<iostream>
#include<climits>
using namespace std;

void print2DArray(int mat[][3],int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
}

void rotatedMatrix(int mat[][3],int n){
    //Transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
   
    
    //Reverse of Matrix
    for(int i=0;i<n;i++){
       int start=0,end=n-1;
       while(start<end){
        swap(mat[i][start],mat[i][end]);
        start++;
        end--;
       }
    }
    print2DArray(mat,n);

}
int main(){
    int matrix[3][3]={
                      {1,2,3},
                      {4,5,6},
                      {7,8,9}
                     };
     int n=3;                

      rotatedMatrix(matrix,n);               
    return 0;
}