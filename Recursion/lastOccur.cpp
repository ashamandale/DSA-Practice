////Last occurance using recursion
#include<iostream>
#include<vector>
using namespace std;
int lastOccur(vector<int> num,int target, int i){
    if(i== num.size()){
        return -1;
    }
   int idxFound=lastOccur(num,target,i+1);
   if( idxFound ==-1 &  num[i]==target){
    return i;
   }
   return idxFound;
}

int main(){
    vector<int> arr={1,2,3,3,3,4};
    cout<<lastOccur(arr,3,0);
    return 0;
}