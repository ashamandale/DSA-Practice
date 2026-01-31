//Tiling Problem
#include<iostream>
using namespace std;
int tilingProblem(int n){  //floor size=2*n
    if(n==0 || n==1){
        return 1;
    }
    //vertical
    int ans1= tilingProblem(n-1);

    int ans2= tilingProblem(n-2);

    return ans1+ans2;
}
int main(){
    cout<<tilingProblem(4);
    return 0;
}