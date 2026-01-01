//Check if One String Swap Can Make Strings Equal://Leetcode-1790

#include<iostream>
using namespace std;

bool areAlmostEqual(string str1, string str2){
    int diff[2];
    int count=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i] != str2[i] ){
            if(count==2)
            return false;
            diff[count]=i;
            count++;
        }
    }

    if(count==0){
        return true;
    }

    if(count==2){
    int i=diff[0];
    int j=diff[1];
    return (str1[i]==str2[j] && str1[j]==str2[i]);
    }

    return false;
}
int main(){
    string str1="bank";
    string str2="kanb";
    cout<<areAlmostEqual(str1,str2);
    return 0;
}
