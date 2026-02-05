#include<iostream>
using namespace std;
void towerOfHanoi(int n,string src,string helper,string des){
    if(n==1){
        cout<<"Transfer disk"<<n<<" from "<< src <<" to "<< des <<endl;
        return;
    }
    towerOfHanoi(n-1,src,des,helper);
    cout<<"Transfer disk"<<n<<" from "<<src<<" to "<< des <<endl;
    towerOfHanoi(n-1,helper,src,des);
}
int main(){
    int n=2;
    towerOfHanoi(n,"S","H","D");
    return 0;
}