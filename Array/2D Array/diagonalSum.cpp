#include<iostream>
using namespace std;
int digonalSum(int mat[][4],int n)//n*n size matrix
{
int sum=0;
// First Approch O(n^2)
// for (int i=0;i<n;i++){
//     for(int j=0;j<n;j++)
//     {
//         if(i==j){
//           sum+=mat[i][j];
//         }
//         else if(j==n-i-1)
//         {
//             sum+=mat[i][j];
//         }
//     }
// }

//Second Approch O(n)
for(int i=0;i<n;i++){ //Primary diagonal
    sum+=mat[i][i];
    if (i!=n-i-1)   //Secondary diagonal
    {
        sum+=mat[i][n-i-1];
    }
    
}
cout<<"Diagonal Sum:"<<sum;
return sum;

}
 
int main(){
    int matrix[4][4]={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
    digonalSum(matrix,4);                  

    return 0;
}