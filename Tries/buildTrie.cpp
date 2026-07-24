#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endOfword;
    Node(){
        endOfword=false;
    }
};   

class Trie{
        Node* root;
    public:
      Trie(){
        root = new Node();
      }    
};


int mian(){
    vector<string> words={ "the" ,"a" ," there","any","thee"};
     Trie trie;
    return 0;
}