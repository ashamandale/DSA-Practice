//Reverse chracter Array

#include<iostream>
#include <climits> 
#include<cstring>
using namespace std;

void reverseArray(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
}
int main(){
    char str[]="code";
    reverseArray(str,strlen(str));
    cout<<str;
    return 0;
}