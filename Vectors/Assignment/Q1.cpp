//645. Set Mismatch
#include<iostream>
#include<vector>
using namespace std;
vector<int> findErrorNums(vector<int>& nums){
    int n=nums.size();
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    int duplicate=-1,missing=-1;
    for(int i=1;i<n;i++){
        if(freq[i]==2){
            duplicate=i;
        }else if(freq[i]==0){
            missing=i;
        }
    }
    return{duplicate,missing};
}
int main(){
    vector<int> arr={1,2,2,4};
    vector<int> res= findErrorNums(arr);
    cout<<res[0]<<","<<res[1]<<endl;
    return 0;
}