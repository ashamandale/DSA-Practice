//return vowel count

#include<iostream>
using namespace std;
int main(){
    string str;
    int count=0;
    cout<<"Enter a string"<<endl;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
            cout<<str[i]<<" ";
        }
    }
    cout<<endl;
    cout<<count;
    return 0;
}
