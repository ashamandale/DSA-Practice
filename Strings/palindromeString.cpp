//check valid Palindrome string 

#include<iostream>
using namespace std;
#include<cstring>

bool isPalindrome(char str[],int n)
{
    int st=0,end=n-1;
    while(st<end){
        if(str[st]!=str[end]){
            cout<<"Not Valid palindrome String";
            return false;
        }
        st++;
        end--;
    }
    cout<<"valid Palindrome String";
    return true;
}
int main(){
    char word[]="racecar";
    isPalindrome(word,strlen(word));
    return 0;
}