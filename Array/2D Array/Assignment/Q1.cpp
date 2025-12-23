//Given 2D integer array of size n × m, write a program to count and print the total number of occurrences of the number 7 present in the array.

#include<iostream>
using namespace std;
int main(){
    int matrix[2][3]={{4,7,8},{8,8,7}};
    int count=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]==7){
               count++;
            }
        }
    }
    cout<<"Number of 7's is "<<count;
    return 0;

}