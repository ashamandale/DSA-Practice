#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    //unordered_map<string,int>m;
    map<string,int>m;

    m["China"]=150;
    m["India"]=150;
    m["US"]=50;
    m["Nepal"]=10;

    for(pair<string, int> country:m){
        cout<<country.first<<","<<country.second<<endl;
    }
    m.erase("Nepal");
   //key exist or not
   if(m.count("Nepal")){
    cout<<"Nepal exist\n";
   }else{
    cout<<"Nepal Doesn't exist \n";
   }
    return 0;
}