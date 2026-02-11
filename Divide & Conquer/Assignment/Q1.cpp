//Search array using merge sort . 

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<string>& arr,int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    vector<string> temp;

    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
     while(j<=ei){
        temp.push_back(arr[j++]);
    }

    for(int x = 0; x < temp.size(); x++){
    arr[si + x] = temp[x];
}

}

void mergeSort(vector<string>& arr,int si,int ei){
    if(si>=ei) return;
    int mid=si+(ei-si)/2;

    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}
int main(){
  vector<string> arr={"sun","earth","mars","mercury"};
  mergeSort(arr,0,arr.size()-1);
   for (auto s : arr) {
        cout << s << " ";
    }
  return 0;
}
