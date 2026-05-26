#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isDuplicate(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch!=')'){ //non closing
             s.push(ch);
        }else{   //closing
          if(s.top()=='('){
            return true;
          }
          while(s.top() !='('){
            s.pop();
          }
          s.pop();
        }
    }  
  return false;    
}
int main(){
    string str1="((a+b))";     //Invalid
    string str2="((a+b)+ (c+d))" ;    //valid

    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2);

    return 0;
}