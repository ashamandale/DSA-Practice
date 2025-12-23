//Print the sum of elements in the second row

#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    int sum=0;

    for(int j=0;j<3;j++){
        sum+=matrix[1][j];
    }
    cout<<"Sum of Elements of first Rows:"<<sum;
    return 0;
}