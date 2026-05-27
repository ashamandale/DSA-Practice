#include<iostream>
#include<queue>
#include<string>
using namespace std;
void FirstNonRepeat(string str){
    queue<char> Q;
    int freq[26]={0};
    for(int i=0;i<str.size();i++){
        char ch =str[i];

        // push character
        Q.push(ch);

        //Increased Frequency
        freq[ch-'a']++;

        //remove Non-Repeating characters
        while(!Q.empty() && freq[Q.front()-'a']>1){
        Q.pop();
    }

     // print first non-repeating character

    if(Q.empty()){
        cout<<"-1 \n";
    }else{
        cout<<Q.front() <<"\n";
    }
    }
  
}
int main(){
    string str="aabccxb";
    FirstNonRepeat(str);
    return 0;
}