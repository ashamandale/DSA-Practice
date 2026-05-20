#include<iostream>
#include<stack>
using namespace std;
string reversrString(string str){
    string ans;
    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top= s.top();
        ans+= top;
        s.pop();
    }
    return ans;
}
int main()
{
    string str="abcd";
    cout<<"reverse="<<reversrString(str)<<endl;
    return 0;
}